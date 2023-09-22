#pragma once
#include <cstddef>     // byte
#include <utility>     // pair
#include <complex>
#include <type_traits>
#include <mpi.h>

#include "Reflection.hpp"

namespace EasyLib {
    namespace MPI {

        template<typename T> struct Data;

        template<typename T> requires(std::is_arithmetic_v<T>)
        struct Data<T>
        {
            inline static constexpr auto size_bytes = sizeof(T);
            inline static constexpr bool is_valid = true;
            inline static constexpr MPI_Datatype type() noexcept
            {
                if      constexpr (std::is_same_v<T, char              >)return MPI_CHAR;
                else if constexpr (std::is_same_v<T, unsigned char     >)return MPI_UNSIGNED_CHAR;
                else if constexpr (std::is_same_v<T, short             >)return MPI_SHORT;
                else if constexpr (std::is_same_v<T, unsigned short    >)return MPI_UNSIGNED_SHORT;
                else if constexpr (std::is_same_v<T, int               >)return MPI_INT;
                else if constexpr (std::is_same_v<T, unsigned int      >)return MPI_UNSIGNED;
                else if constexpr (std::is_same_v<T, long              >)return MPI_LONG;
                else if constexpr (std::is_same_v<T, unsigned long     >)return MPI_UNSIGNED_LONG;
                else if constexpr (std::is_same_v<T, long long         >)return MPI_LONG_LONG;
                else if constexpr (std::is_same_v<T, unsigned long long>)return MPI_UNSIGNED_LONG_LONG;
                else if constexpr (std::is_same_v<T, float             >)return MPI_FLOAT;
                else if constexpr (std::is_same_v<T, double            >)return MPI_DOUBLE;
                else if constexpr (std::is_same_v<T, long double       >)return MPI_LONG_DOUBLE;
                else if constexpr (std::is_same_v<T, wchar_t           >)return MPI_WCHAR;
                else {
                    // unsupported type!!!
                }
            }
            inline static void create() {/* do nothing */ }
            inline static void free() { /* do nothing */ }
        };

        //! @brief pre-defined type for BYTE
        template<>
        struct Data<std::byte>
        {
            inline static constexpr auto size_bytes = sizeof(std::byte);
            inline static constexpr bool is_valid = true;
            inline static constexpr MPI_Datatype type() { return MPI_BYTE; }
            inline static void create() {/* do nothing */ }
            inline static void free() { /* do nothing */ }
        };

        template<typename T> requires(std::is_array_v<T>)
        struct Data<T>
        {
            using elem_type = std::remove_all_extents_t<T>;

            static_assert(Data<elem_type>::is_valid, "element type is unsupported!");
            static_assert(!std::is_same_v<elem_type, bool>, "bool array is unsupported!");

            inline static constexpr auto size_bytes = sizeof(T);
            inline static constexpr bool is_valid = true;

            inline static int type()
            {
                //assert(type_ != MPI_DATATYPE_NULL);
                return type_;
            }

            inline static void create()
            {
                if (type_ == MPI_DATATYPE_NULL) {
                    constexpr int count = sizeof(T) / sizeof(elem_type);
                    MPI_Type_contiguous(count, Data<elem_type>::type(), &type_);
                    MPI_Type_commit(&type_);
                }
            }
            inline static void free()
            {
                if (type_ != MPI_DATATYPE_NULL) {
                    MPI_Type_free(&type_);
                    type_ = MPI_DATATYPE_NULL;
                }
            }

        private:
            inline static MPI_Datatype type_{ MPI_DATATYPE_NULL };
        };

        template<typename T, std::size_t N>
        struct Data<std::array<T, N> >
        {
            using elem_type = T;

            static_assert(N > 0);
            static_assert(Data<elem_type>::is_valid, "element type is unsupported!");
            static_assert(!std::is_same_v<elem_type, bool>, "bool array is unsupported!");

            inline static constexpr auto size_bytes = sizeof(std::array<T, N>);
            inline static constexpr bool is_valid = Data<elem_type>::is_valid;

            inline static MPI_Datatype type()
            {
                if constexpr (N == 1)
                    return Data<T>::type();
                else {
                    //assert(type_ != MPI_DATATYPE_NULL);
                    return type_;
                }
            }

            inline static void create()
            {
                if constexpr (N > 1) {
                    if (type_ == MPI_DATATYPE_NULL) {
                        MPI_Type_contiguous(N, Data<elem_type>::type(), &type_);
                        MPI_Type_commit(&type_);
                    }
                }
            }
            inline static void free()
            {
                if (type_ != MPI_DATATYPE_NULL) {
                    MPI_Type_free(&type_);
                    type_ = MPI_DATATYPE_NULL;
                }
            }

        private:
            inline static MPI_Datatype type_{ MPI_DATATYPE_NULL };
        };

        //! @brief complex type
        template<typename Real>
        struct Data<std::complex<Real>>
        {
            static_assert(std::is_floating_point_v<Real>, "data type is not floating point number!");

            inline static constexpr auto size_bytes = sizeof(std::complex<Real>);
            inline static constexpr bool is_valid = true;

            inline static MPI_Datatype type()
            {
                if      constexpr (std::is_same_v<Real, float      >)return MPI_C_FLOAT_COMPLEX;
                else if constexpr (std::is_same_v<Real, double     >)return MPI_C_DOUBLE_COMPLEX;
                else if constexpr (std::is_same_v<Real, long double>)return MPI_C_LONG_DOUBLE_COMPLEX;
                else { /*  impossible!!! */ }
            }
        };

        //! @brief std::pair
        template<typename First, typename Second>
        struct Data<std::pair<First, Second> >
        {
            static_assert(Data<First>::is_valid&& Data<Second>::is_valid, "field type is unsupported!");
            static_assert(!std::is_same_v<First, bool> && !std::is_same_v<Second, bool>, "bool type is unsupported!");

            inline static constexpr auto size_bytes = sizeof(std::pair<First, Second>);
            inline static constexpr bool is_valid = Data<First>::is_valid && Data<Second>::is_valid;

            inline static MPI_Datatype type()
            {
                using pair_t = std::pair<First, Second>;
                if      constexpr (std::is_same_v<pair_t, std::pair<float, int>               >) return MPI_FLOAT_INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<double, int>              >) return MPI_DOUBLE_INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<long double, int>         >) return MPI_LONG_DOUBLE_INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<long, int>                >) return MPI_LONG_INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<short, int>               >) return MPI_SHORT_INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<int, int>                 >) return MPI_2INT;
                else if constexpr (std::is_same_v<pair_t, std::pair<float, int>               >) return MPI_C_FLOAT_COMPLEX;
                else if constexpr (std::is_same_v<pair_t, std::pair<double, int>              >) return MPI_C_DOUBLE_COMPLEX;
                else if constexpr (std::is_same_v<pair_t, std::pair<long double, long double> >) return MPI_C_LONG_DOUBLE_COMPLEX;
                else {
                    //assert(type_ != MPI_DATATYPE_NULL);
                    return type_;
                }
            }

            inline static void create()
            {
                using pair_t = std::pair<First, Second>;
                if      constexpr (
                    std::is_same_v<pair_t, std::pair<float, int>               > ||
                    std::is_same_v<pair_t, std::pair<double, int>              > ||
                    std::is_same_v<pair_t, std::pair<long double, int>         > ||
                    std::is_same_v<pair_t, std::pair<long, int>                > ||
                    std::is_same_v<pair_t, std::pair<short, int>               > ||
                    std::is_same_v<pair_t, std::pair<int, int>                 > ||
                    std::is_same_v<pair_t, std::pair<float, int>               > ||
                    std::is_same_v<pair_t, std::pair<double, int>              > ||
                    std::is_same_v<pair_t, std::pair<long double, long double> >) {
                    /* do nothing */
                }
                else {
                    if (type_ == MPI_DATATYPE_NULL) {
                        const int          block_len[2] = { 1,1 };
                        const MPI_Aint     block_dsp[2] = { 0, offsetof(pair_t, second) };
                        const MPI_Datatype block_typ[2] = { Data<First>::type(), Data<Second>::type() };
                        MPI_Type_create_struct(2, block_len, block_dsp, block_typ, &type_);
                        MPI_Aint lb = 0, ext = 0;
                        MPI_Type_get_extent(type_, &lb, &ext);
                        if (ext - lb != size_bytes) {
                            MPI_Datatype old_type = type_;
                            MPI_Type_create_resized(type_, 0, size_bytes, &type_);
                            if (type_ != old_type)MPI_Type_free(&old_type);
                        }
                        MPI_Type_commit(&type_);
                    }
                }
            }
            inline static void free()
            {
                using pair_t = std::pair<First, Second>;
                if      constexpr (
                    std::is_same_v<pair_t, std::pair<float, int>               > ||
                    std::is_same_v<pair_t, std::pair<double, int>              > ||
                    std::is_same_v<pair_t, std::pair<long double, int>         > ||
                    std::is_same_v<pair_t, std::pair<long, int>                > ||
                    std::is_same_v<pair_t, std::pair<short, int>               > ||
                    std::is_same_v<pair_t, std::pair<int, int>                 > ||
                    std::is_same_v<pair_t, std::pair<float, int>               > ||
                    std::is_same_v<pair_t, std::pair<double, int>              > ||
                    std::is_same_v<pair_t, std::pair<long double, long double> >) {
                    /* do nothing */
                }
                else {
                    if (type_ != MPI_DATATYPE_NULL) {
                        MPI_Type_free(&type_);
                        type_ = MPI_DATATYPE_NULL;
                    }
                }
            }

        private:
            inline static MPI_Datatype type_{ MPI_DATATYPE_NULL };
        };

        namespace detail {
            template<typename List> struct AllValid;
            template<typename Head, typename ... Tails>
            struct AllValid<Types<Head, Tails...>>
            {
                inline static constexpr bool value = Data<Head>::is_valid && !std::is_reference_v<Head> && !std::is_pointer_v<Head> && AllValid<Types<Tails...>>::value;
            };
            template<typename Head>
            struct AllValid<Types<Head>>
            {
                inline static constexpr bool value = Data<Head>::is_valid && !std::is_reference_v<Head> && !std::is_pointer_v<Head>;
            };
        }

        template<typename T> requires(std::is_class_v<T>)
        struct Data<T>
        {
            inline static constexpr auto size_bytes = sizeof(T);
            inline static constexpr auto nfield = Reflection<T>::nfield;
            inline static constexpr bool is_valid = detail::AllValid<Reflection<T>::field_types>::value;

            inline static MPI_Datatype type()
            {
                //assert(type_ != MPI_DATATYPE_NULL);
                return type_;
            }

            inline static void create()
            {
                if (type_ != MPI_DATATYPE_NULL) return;

                int          block_len[nfield]{ 0 };
                MPI_Aint     block_dsp[nfield]{ 0 };
                MPI_Datatype block_typ[nfield]{ 0 };
                update_block_info_<0>(block_len, block_dsp, block_typ);

                MPI_Type_create_struct(nfield, block_len, block_dsp, block_typ, &type_);
                MPI_Aint lb = 0, ext = 0;
                MPI_Type_get_extent(type_, &lb, &ext);
                if (ext - lb != size_bytes) {
                    MPI_Datatype old_type = type_;
                    MPI_Type_create_resized(type_, 0, size_bytes, &type_);
                    if (type_ != old_type)MPI_Type_free(&old_type);
                }
                MPI_Type_commit(&type_);
            }
            inline static void free()
            {
                if (type_ != MPI_DATATYPE_NULL) {
                    MPI_Type_free(&type_);
                    type_ = MPI_DATATYPE_NULL;
                }
            }

        private:
            template<size_t Field>
            static void update_block_info_(int(&block_len)[nfield], MPI_Aint(&block_dsp)[nfield], int(&block_typ)[nfield])
            {
                using ftype = member_type<T, Field>;
                block_len[Field] = 1;
                block_dsp[Field] = (MPI_Aint)member_offset<T, Field>();
                block_typ[Field] = Data<ftype>::type();
                if constexpr (Field + 1 < nfield)
                    update_block_info_<Field + 1>(block_len, block_dsp, block_typ);
            }
            inline static MPI_Datatype type_{ MPI_DATATYPE_NULL };
        };

        //! @brief Define non-aggregate type to MPI
        //! @param T      Non-aggregate type.
        //! @param m0,... The members.
        //! @code
        //! struct Foo
        //! {
        //!     int m0;
        //! private:
        //!     int m1;
        //! };
        //! DECLARE_TYPE(Foo,m0,m1)
        //! 
        //! // use register_struct in some function
        //! void bar()
        //! {
        //!     //... do something
        //!     register_type<Foo>();
        //!     //... do something
        //! }
        //! @endcode
#define DECLARE_TYPE(T,m0,...) REFLECTION(T,m0,__VA_ARGS__)

        //! @brief Register a type(aggregate/non-aggregate) to MPI.
        //! @tparam T  Aggregate or non-aggregate type.
        template<typename T> requires(std::is_class_v<T>)
        void register_type()
        {
            if (Data<T>::type() != MPI_DATATYPE_NULL)return;
            Data<T>::create();
        }
        //! @brief Free a type(aggregate/non-aggregate) from MPI.
        //! @tparam T  Aggregate or non-aggregate type.
        template<typename T>
        void unregister_type()
        {
            Data<T>::free();
        }
    }
}
