#pragma once
#include <type_traits> //
#include <utility>     // index_sequence
#include <array>       //

#include "Macro.h"

#define _FORTM1(F,T,m1) F(T,m1)
#define _FORTM2(F,T,m1,m2 ) _FORTM1(F,T,m1) _FORTM1(F,T,m2)
#define _FORTM3(F,T,m1,...) _FORTM1(F,T,m1) _FORTM2(F,T,__VA_ARGS__)
#define _FORTM4(F,T,m1,...) _FORTM1(F,T,m1) _FORTM3(F,T,__VA_ARGS__)
#define _FORTM5(F,T,m1,...) _FORTM1(F,T,m1) _FORTM4(F,T,__VA_ARGS__)
#define _FORTM6(F,T,m1,...) _FORTM1(F,T,m1) _FORTM5(F,T,__VA_ARGS__)
#define _FORTM7(F,T,m1,...) _FORTM1(F,T,m1) _FORTM6(F,T,__VA_ARGS__)
#define _FORTM8(F,T,m1,...) _FORTM1(F,T,m1) _FORTM7(F,T,__VA_ARGS__)
#define _FORTM9(F,T,m1,...) _FORTM1(F,T,m1) _FORTM8(F,T,__VA_ARGS__)
#define _FORTM10(F,T,m1,...) _FORTM1(F,T,m1) _FORTM9(F,T,__VA_ARGS__)
#define _FORTM11(F,T,m1,...) _FORTM1(F,T,m1) _FORTM10(F,T,__VA_ARGS__)
#define _FORTM12(F,T,m1,...) _FORTM1(F,T,m1) _FORTM11(F,T,__VA_ARGS__)
#define _FORTM13(F,T,m1,...) _FORTM1(F,T,m1) _FORTM12(F,T,__VA_ARGS__)
#define _FORTM14(F,T,m1,...) _FORTM1(F,T,m1) _FORTM13(F,T,__VA_ARGS__)
#define _FORTM15(F,T,m1,...) _FORTM1(F,T,m1) _FORTM14(F,T,__VA_ARGS__)
#define _FORTM16(F,T,m1,...) _FORTM1(F,T,m1) _FORTM15(F,T,__VA_ARGS__)
#define _FORTM17(F,T,m1,...) _FORTM1(F,T,m1) _FORTM16(F,T,__VA_ARGS__)
#define _FORTM18(F,T,m1,...) _FORTM1(F,T,m1) _FORTM17(F,T,__VA_ARGS__)
#define _FORTM19(F,T,m1,...) _FORTM1(F,T,m1) _FORTM18(F,T,__VA_ARGS__)
#define _FORTM20(F,T,m1,...) _FORTM1(F,T,m1) _FORTM19(F,T,__VA_ARGS__)
#define _FORTM21(F,T,m1,...) _FORTM1(F,T,m1) _FORTM20(F,T,__VA_ARGS__)
#define _FORTM22(F,T,m1,...) _FORTM1(F,T,m1) _FORTM21(F,T,__VA_ARGS__)
#define _FORTM23(F,T,m1,...) _FORTM1(F,T,m1) _FORTM22(F,T,__VA_ARGS__)
#define _FORTM24(F,T,m1,...) _FORTM1(F,T,m1) _FORTM23(F,T,__VA_ARGS__)
#define _FORTM25(F,T,m1,...) _FORTM1(F,T,m1) _FORTM24(F,T,__VA_ARGS__)
#define _FORTM26(F,T,m1,...) _FORTM1(F,T,m1) _FORTM25(F,T,__VA_ARGS__)
#define _FORTM27(F,T,m1,...) _FORTM1(F,T,m1) _FORTM26(F,T,__VA_ARGS__)
#define _FORTM28(F,T,m1,...) _FORTM1(F,T,m1) _FORTM27(F,T,__VA_ARGS__)
#define _FORTM29(F,T,m1,...) _FORTM1(F,T,m1) _FORTM28(F,T,__VA_ARGS__)
#define _FORTM30(F,T,m1,...) _FORTM1(F,T,m1) _FORTM29(F,T,__VA_ARGS__)
#define _FORTM31(F,T,m1,...) _FORTM1(F,T,m1) _FORTM30(F,T,__VA_ARGS__)
#define _FORTM32(F,T,m1,...) _FORTM1(F,T,m1) _FORTM31(F,T,__VA_ARGS__)
#define _FORTM33(F,T,m1,...) _FORTM1(F,T,m1) _FORTM32(F,T,__VA_ARGS__)
#define _FORTM34(F,T,m1,...) _FORTM1(F,T,m1) _FORTM33(F,T,__VA_ARGS__)
#define _FORTM35(F,T,m1,...) _FORTM1(F,T,m1) _FORTM34(F,T,__VA_ARGS__)
#define _FORTM36(F,T,m1,...) _FORTM1(F,T,m1) _FORTM35(F,T,__VA_ARGS__)
#define _FORTM37(F,T,m1,...) _FORTM1(F,T,m1) _FORTM36(F,T,__VA_ARGS__)
#define _FORTM38(F,T,m1,...) _FORTM1(F,T,m1) _FORTM37(F,T,__VA_ARGS__)
#define _FORTM39(F,T,m1,...) _FORTM1(F,T,m1) _FORTM38(F,T,__VA_ARGS__)
#define _FORTM40(F,T,m1,...) _FORTM1(F,T,m1) _FORTM39(F,T,__VA_ARGS__)
#define _FORTM41(F,T,m1,...) _FORTM1(F,T,m1) _FORTM40(F,T,__VA_ARGS__)
#define _FORTM42(F,T,m1,...) _FORTM1(F,T,m1) _FORTM41(F,T,__VA_ARGS__)
#define _FORTM43(F,T,m1,...) _FORTM1(F,T,m1) _FORTM42(F,T,__VA_ARGS__)
#define _FORTM44(F,T,m1,...) _FORTM1(F,T,m1) _FORTM43(F,T,__VA_ARGS__)
#define _FORTM45(F,T,m1,...) _FORTM1(F,T,m1) _FORTM44(F,T,__VA_ARGS__)
#define _FORTM46(F,T,m1,...) _FORTM1(F,T,m1) _FORTM45(F,T,__VA_ARGS__)
#define _FORTM47(F,T,m1,...) _FORTM1(F,T,m1) _FORTM46(F,T,__VA_ARGS__)
#define _FORTM48(F,T,m1,...) _FORTM1(F,T,m1) _FORTM47(F,T,__VA_ARGS__)
#define _FORTM49(F,T,m1,...) _FORTM1(F,T,m1) _FORTM48(F,T,__VA_ARGS__)
#define _FORTM50(F,T,m1,...) _FORTM1(F,T,m1) _FORTM49(F,T,__VA_ARGS__)
#define _FORTM51(F,T,m1,...) _FORTM1(F,T,m1) _FORTM50(F,T,__VA_ARGS__)
#define _FORTM52(F,T,m1,...) _FORTM1(F,T,m1) _FORTM51(F,T,__VA_ARGS__)
#define _FORTM53(F,T,m1,...) _FORTM1(F,T,m1) _FORTM52(F,T,__VA_ARGS__)
#define _FORTM54(F,T,m1,...) _FORTM1(F,T,m1) _FORTM53(F,T,__VA_ARGS__)
#define _FORTM55(F,T,m1,...) _FORTM1(F,T,m1) _FORTM54(F,T,__VA_ARGS__)
#define _FORTM56(F,T,m1,...) _FORTM1(F,T,m1) _FORTM55(F,T,__VA_ARGS__)
#define _FORTM57(F,T,m1,...) _FORTM1(F,T,m1) _FORTM56(F,T,__VA_ARGS__)
#define _FORTM58(F,T,m1,...) _FORTM1(F,T,m1) _FORTM57(F,T,__VA_ARGS__)
#define _FORTM59(F,T,m1,...) _FORTM1(F,T,m1) _FORTM58(F,T,__VA_ARGS__)
#define _FORTM60(F,T,m1,...) _FORTM1(F,T,m1) _FORTM59(F,T,__VA_ARGS__)
#define _FORTM61(F,T,m1,...) _FORTM1(F,T,m1) _FORTM60(F,T,__VA_ARGS__)
#define _FORTM62(F,T,m1,...) _FORTM1(F,T,m1) _FORTM61(F,T,__VA_ARGS__)
#define _FORTM63(F,T,m1,...) _FORTM1(F,T,m1) _FORTM62(F,T,__VA_ARGS__)
#define _FORTM64(F,T,m1,...) _FORTM1(F,T,m1) _FORTM63(F,T,__VA_ARGS__)

#define _FORTM_N3_(N,...) _FORTM ## N(__VA_ARGS__)
#define _FORTM_N2_(N,...) _FORTM_N3_(N,__VA_ARGS__)

/*
* Loop each argument for variadic arguments.
*     F   -- Function used to proceed one argument.
*     T   -- Class
*     ... -- Member names
*
* For example:
*     #define MemberType(T,m) decltype(T::m),
*     #define MemberOffset(T,m) offsetof(T,m),
*     struct Foo{int a1; char a2; float a3;};
*     using types = std::tuple<FOR_EACH_TM(MemberOffset,Foo,a1,a2,a3)void>; // add void at last because the comma.
*     // --> std::tuple<int,char,float,void>
*     const auto offsets = std::array<std::size_t, 3>{FOR_EACH_TM(MemberOffset,Foo,a1,a2,a3)};
*     // --> {0,4,8}
*
* NOTE: This macro can't work if not use the /Zc:preprocessor compiler switch for MSVC.
*/
#define  FOR_EACH_TM(F,T,...) _FORTM_N2_(PP_NARG(__VA_ARGS__),F,T,__VA_ARGS__)

namespace EasyLib {
    
    template<typename T>
    concept Aggregate = std::is_aggregate_v<T>;

    //! @brief Reflection information of type T.
    //!   Reflection<T>::size_bytes    -- size of the data type T.
    //!   Reflection<T>::nfield        -- number of fields.
    //!   Reflection<T>::field_offsets -- offset of each member in bytes: std::array{...}.
    //!   Reflection<T>::field_types   -- type set of each member: Types<...>.
    //! @tparam T  The data type.
    //! @note
    //!  1. Aggregate type will be reflected automatically.
    //!  2. Please use REFLECTION macro to reflect non-aggregate type.
    template<typename T> struct Reflection;

    template<typename T> struct Type
    {
        using type = T;
        inline static constexpr std::size_t size_bytes = sizeof(T);
    };

    template<typename ... TS> struct Types
    {
        inline static constexpr std::size_t size = sizeof...(TS);
    };

    template<std::size_t I, typename List> struct TypeOf;
    template<std::size_t I, typename Head, typename ... Tails>
    struct TypeOf<I, Types<Head, Tails...> >
    {
        using type = typename TypeOf<I - 1, Types<Tails...>>::type;
    };
    template<typename Head, typename ... Tails>
    struct TypeOf<0, Types<Head, Tails...> >
    {
        using type = Head;
    };

    template<typename List> struct Popback;
    template<typename T, typename List> struct Pushfront;

    template<typename T1>
    struct Pushfront<T1, Types<> >
    {
        using type = Types<T1>;
    };
    template<typename T1, typename T2>
    struct Pushfront<T1, Types<T2> >
    {
        using type = Types<T1, T2>;
    };
    template<typename T1, typename ... Tails>
    struct Pushfront<T1, Types<Tails...> >
    {
        using type = Types<T1, Tails...>;
    };

    template<typename T>
    struct Popback<Types<T> >
    {
        using type = Types<>;
    };
    template<typename T1, typename T2>
    struct Popback<Types<T1, T2> >
    {
        using type = Types<T1>;
    };
    template<typename Head, typename ... Tails>
    struct Popback<Types<Head, Tails...> >
    {
        using type = typename Pushfront<Head, typename Popback<Types<Tails...> >::type>::type;
    };

    namespace detail
    {
        template<typename T, typename... Args>
        concept aggregate_initializable = Aggregate<T> && requires { T{ {std::declval<Args>()}... }; };

        struct any { template <typename T> constexpr operator T() const noexcept; };

        template <std::size_t I> using indexed_any = any;

        template <typename T, typename Indices>requires(std::is_aggregate_v<T>) struct aggregate_initializable_from_indices;

        template <Aggregate T, std::size_t... Indices>
        struct aggregate_initializable_from_indices<T, std::index_sequence<Indices...>> : std::bool_constant<aggregate_initializable<T, indexed_any<Indices>...>> {};

        //! @brief whether or not the aggregate type can be initialized by N compoients data.
        template <typename T, std::size_t N>
        concept aggregate_initializable_with_n_args = Aggregate<T> && aggregate_initializable_from_indices<T, std::make_index_sequence<N>>::value;

        template <Aggregate T, typename Indices, typename FieldIndices>
        struct aggregate_with_indices_initializable_with;

        template <Aggregate T, std::size_t... Indices, std::size_t... FieldIndices>
        struct aggregate_with_indices_initializable_with<T, std::index_sequence<Indices...>, std::index_sequence<FieldIndices...> > :
            std::bool_constant < requires { T{ {std::declval<indexed_any<Indices>>()}..., {{std::declval<indexed_any<FieldIndices>>()}...} }; } >
        {};

        //! @brief whether or not the N-th unique field can be initialized by M compoients data.
        template <typename T, std::size_t N, std::size_t M>
        concept aggregate_field_n_initializable_with_m_args = Aggregate<T> && aggregate_with_indices_initializable_with<T, std::make_index_sequence<N>, std::make_index_sequence<M >> ::value;

        //! @brief get number of total fields
        //! @tparam T         aggregate data type.
        //! @tparam NumField  index used for counting fields, should be ZERO.
        template<Aggregate T, std::size_t NumField = 0>
        inline consteval std::size_t num_fields_()noexcept
        {
            if constexpr (!aggregate_initializable_with_n_args<T, NumField + 1>)
                return NumField;
            else
                return num_fields_<T, NumField + 1>();
        }

        // generate automatic by gen_field_offsets_func
        template<Aggregate T>
        inline auto field_offsets_()
        {
            constexpr std::size_t nf = num_fields_<T>();
            using array = std::array<std::size_t, nf>;
            if      constexpr (nf == 0)return array{};
            else if constexpr (nf == 1)return array{ 0 };
            else if constexpr (nf == 2) {
                auto& [m1, m2] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2 };
            }
            else if constexpr (nf == 3) {
                auto& [m1, m2, m3] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3 };
            }
            else if constexpr (nf == 4) {
                auto& [m1, m2, m3, m4] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4 };
            }
            else if constexpr (nf == 5) {
                auto& [m1, m2, m3, m4, m5] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5 };
            }
            else if constexpr (nf == 6) {
                auto& [m1, m2, m3, m4, m5, m6] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6 };
            }
            else if constexpr (nf == 7) {
                auto& [m1, m2, m3, m4, m5, m6, m7] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7 };
            }
            else if constexpr (nf == 8) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8 };
            }
            else if constexpr (nf == 9) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9 };
            }
            else if constexpr (nf == 10) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10 };
            }
            else if constexpr (nf == 11) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11 };
            }
            else if constexpr (nf == 12) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12 };
            }
            else if constexpr (nf == 13) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13 };
            }
            else if constexpr (nf == 14) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14 };
            }
            else if constexpr (nf == 15) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15 };
            }
            else if constexpr (nf == 16) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16 };
            }
            else if constexpr (nf == 17) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17 };
            }
            else if constexpr (nf == 18) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18 };
            }
            else if constexpr (nf == 19) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19 };
            }
            else if constexpr (nf == 20) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20 };
            }
            else if constexpr (nf == 21) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21 };
            }
            else if constexpr (nf == 22) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22 };
            }
            else if constexpr (nf == 23) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23 };
            }
            else if constexpr (nf == 24) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24 };
            }
            else if constexpr (nf == 25) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25 };
            }
            else if constexpr (nf == 26) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26 };
            }
            else if constexpr (nf == 27) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27 };
            }
            else if constexpr (nf == 28) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28 };
            }
            else if constexpr (nf == 29) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29 };
            }
            else if constexpr (nf == 30) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30 };
            }
            else if constexpr (nf == 31) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31 };
            }
            else if constexpr (nf == 32) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32 };
            }
            else if constexpr (nf == 33) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33 };
            }
            else if constexpr (nf == 34) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34 };
            }
            else if constexpr (nf == 35) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35 };
            }
            else if constexpr (nf == 36) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36 };
            }
            else if constexpr (nf == 37) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37 };
            }
            else if constexpr (nf == 38) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38 };
            }
            else if constexpr (nf == 39) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39 };
            }
            else if constexpr (nf == 40) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40 };
            }
            else if constexpr (nf == 41) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41 };
            }
            else if constexpr (nf == 42) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42 };
            }
            else if constexpr (nf == 43) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43 };
            }
            else if constexpr (nf == 44) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44 };
            }
            else if constexpr (nf == 45) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45 };
            }
            else if constexpr (nf == 46) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46 };
            }
            else if constexpr (nf == 47) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47 };
            }
            else if constexpr (nf == 48) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48 };
            }
            else if constexpr (nf == 49) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49 };
            }
            else if constexpr (nf == 50) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50 };
            }
            else if constexpr (nf == 51) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51 };
            }
            else if constexpr (nf == 52) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52 };
            }
            else if constexpr (nf == 53) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53 };
            }
            else if constexpr (nf == 54) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54 };
            }
            else if constexpr (nf == 55) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55 };
            }
            else if constexpr (nf == 56) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56 };
            }
            else if constexpr (nf == 57) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57 };
            }
            else if constexpr (nf == 58) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58 };
            }
            else if constexpr (nf == 59) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59 };
            }
            else if constexpr (nf == 60) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59, (std::size_t)&m60 };
            }
            else if constexpr (nf == 61) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59, (std::size_t)&m60, (std::size_t)&m61 };
            }
            else if constexpr (nf == 62) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59, (std::size_t)&m60, (std::size_t)&m61, (std::size_t)&m62 };
            }
            else if constexpr (nf == 63) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62, m63] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59, (std::size_t)&m60, (std::size_t)&m61, (std::size_t)&m62, (std::size_t)&m63 };
            }
            else if constexpr (nf == 64) {
                auto& [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62, m63, m64] = *((T*)nullptr);
                return array{ (std::size_t)&m1, (std::size_t)&m2, (std::size_t)&m3, (std::size_t)&m4, (std::size_t)&m5, (std::size_t)&m6, (std::size_t)&m7, (std::size_t)&m8, (std::size_t)&m9, (std::size_t)&m10, (std::size_t)&m11, (std::size_t)&m12, (std::size_t)&m13, (std::size_t)&m14, (std::size_t)&m15, (std::size_t)&m16, (std::size_t)&m17, (std::size_t)&m18, (std::size_t)&m19, (std::size_t)&m20, (std::size_t)&m21, (std::size_t)&m22, (std::size_t)&m23, (std::size_t)&m24, (std::size_t)&m25, (std::size_t)&m26, (std::size_t)&m27, (std::size_t)&m28, (std::size_t)&m29, (std::size_t)&m30, (std::size_t)&m31, (std::size_t)&m32, (std::size_t)&m33, (std::size_t)&m34, (std::size_t)&m35, (std::size_t)&m36, (std::size_t)&m37, (std::size_t)&m38, (std::size_t)&m39, (std::size_t)&m40, (std::size_t)&m41, (std::size_t)&m42, (std::size_t)&m43, (std::size_t)&m44, (std::size_t)&m45, (std::size_t)&m46, (std::size_t)&m47, (std::size_t)&m48, (std::size_t)&m49, (std::size_t)&m50, (std::size_t)&m51, (std::size_t)&m52, (std::size_t)&m53, (std::size_t)&m54, (std::size_t)&m55, (std::size_t)&m56, (std::size_t)&m57, (std::size_t)&m58, (std::size_t)&m59, (std::size_t)&m60, (std::size_t)&m61, (std::size_t)&m62, (std::size_t)&m63, (std::size_t)&m64 };
            }
        }

        // generate automatic by gen_field_types_func
        template<Aggregate T>
        inline auto field_types_()
        {
            constexpr std::size_t nf = num_fields_<T>();
            if      constexpr (nf == 0)return Types<>{};
            else if constexpr (nf == 1) { auto [m1] = *((T*)nullptr); return Types<decltype(m1)>{}; }
            else if constexpr (nf == 2) { auto [m1, m2] = *((T*)nullptr); return Types<decltype(m1), decltype(m2)>{}; }
            else if constexpr (nf == 3) { auto [m1, m2, m3] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3)>{}; }
            else if constexpr (nf == 4) { auto [m1, m2, m3, m4] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4)>{}; }
            else if constexpr (nf == 5) { auto [m1, m2, m3, m4, m5] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5)>{}; }
            else if constexpr (nf == 6) { auto [m1, m2, m3, m4, m5, m6] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6)>{}; }
            else if constexpr (nf == 7) { auto [m1, m2, m3, m4, m5, m6, m7] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7)>{}; }
            else if constexpr (nf == 8) { auto [m1, m2, m3, m4, m5, m6, m7, m8] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8)>{}; }
            else if constexpr (nf == 9) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9)>{}; }
            else if constexpr (nf == 10) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10)>{}; }
            else if constexpr (nf == 11) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11)>{}; }
            else if constexpr (nf == 12) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12)>{}; }
            else if constexpr (nf == 13) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13)>{}; }
            else if constexpr (nf == 14) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14)>{}; }
            else if constexpr (nf == 15) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15)>{}; }
            else if constexpr (nf == 16) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16)>{}; }
            else if constexpr (nf == 17) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17)>{}; }
            else if constexpr (nf == 18) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18)>{}; }
            else if constexpr (nf == 19) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19)>{}; }
            else if constexpr (nf == 20) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20)>{}; }
            else if constexpr (nf == 21) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21)>{}; }
            else if constexpr (nf == 22) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22)>{}; }
            else if constexpr (nf == 23) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23)>{}; }
            else if constexpr (nf == 24) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24)>{}; }
            else if constexpr (nf == 25) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25)>{}; }
            else if constexpr (nf == 26) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26)>{}; }
            else if constexpr (nf == 27) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27)>{}; }
            else if constexpr (nf == 28) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28)>{}; }
            else if constexpr (nf == 29) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29)>{}; }
            else if constexpr (nf == 30) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30)>{}; }
            else if constexpr (nf == 31) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31)>{}; }
            else if constexpr (nf == 32) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32)>{}; }
            else if constexpr (nf == 33) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33)>{}; }
            else if constexpr (nf == 34) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34)>{}; }
            else if constexpr (nf == 35) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35)>{}; }
            else if constexpr (nf == 36) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36)>{}; }
            else if constexpr (nf == 37) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37)>{}; }
            else if constexpr (nf == 38) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38)>{}; }
            else if constexpr (nf == 39) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39)>{}; }
            else if constexpr (nf == 40) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40)>{}; }
            else if constexpr (nf == 41) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41)>{}; }
            else if constexpr (nf == 42) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42)>{}; }
            else if constexpr (nf == 43) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43)>{}; }
            else if constexpr (nf == 44) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44)>{}; }
            else if constexpr (nf == 45) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45)>{}; }
            else if constexpr (nf == 46) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46)>{}; }
            else if constexpr (nf == 47) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47)>{}; }
            else if constexpr (nf == 48) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48)>{}; }
            else if constexpr (nf == 49) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49)>{}; }
            else if constexpr (nf == 50) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50)>{}; }
            else if constexpr (nf == 51) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51)>{}; }
            else if constexpr (nf == 52) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52)>{}; }
            else if constexpr (nf == 53) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53)>{}; }
            else if constexpr (nf == 54) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54)>{}; }
            else if constexpr (nf == 55) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55)>{}; }
            else if constexpr (nf == 56) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56)>{}; }
            else if constexpr (nf == 57) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57)>{}; }
            else if constexpr (nf == 58) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58)>{}; }
            else if constexpr (nf == 59) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59)>{}; }
            else if constexpr (nf == 60) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59), decltype(m60)>{}; }
            else if constexpr (nf == 61) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59), decltype(m60), decltype(m61)>{}; }
            else if constexpr (nf == 62) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59), decltype(m60), decltype(m61), decltype(m62)>{}; }
            else if constexpr (nf == 63) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62, m63] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59), decltype(m60), decltype(m61), decltype(m62), decltype(m63)>{}; }
            else if constexpr (nf == 64) { auto [m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16, m17, m18, m19, m20, m21, m22, m23, m24, m25, m26, m27, m28, m29, m30, m31, m32, m33, m34, m35, m36, m37, m38, m39, m40, m41, m42, m43, m44, m45, m46, m47, m48, m49, m50, m51, m52, m53, m54, m55, m56, m57, m58, m59, m60, m61, m62, m63, m64] = *((T*)nullptr); return Types<decltype(m1), decltype(m2), decltype(m3), decltype(m4), decltype(m5), decltype(m6), decltype(m7), decltype(m8), decltype(m9), decltype(m10), decltype(m11), decltype(m12), decltype(m13), decltype(m14), decltype(m15), decltype(m16), decltype(m17), decltype(m18), decltype(m19), decltype(m20), decltype(m21), decltype(m22), decltype(m23), decltype(m24), decltype(m25), decltype(m26), decltype(m27), decltype(m28), decltype(m29), decltype(m30), decltype(m31), decltype(m32), decltype(m33), decltype(m34), decltype(m35), decltype(m36), decltype(m37), decltype(m38), decltype(m39), decltype(m40), decltype(m41), decltype(m42), decltype(m43), decltype(m44), decltype(m45), decltype(m46), decltype(m47), decltype(m48), decltype(m49), decltype(m50), decltype(m51), decltype(m52), decltype(m53), decltype(m54), decltype(m55), decltype(m56), decltype(m57), decltype(m58), decltype(m59), decltype(m60), decltype(m61), decltype(m62), decltype(m63), decltype(m64)>{}; }
        }
    }

    template<Aggregate T>
    struct Reflection<T>
    {
        inline static constexpr std::size_t size_bytes = sizeof(T);
        inline static constexpr std::size_t nfield = detail::num_fields_<T>();
        inline static const std::array<std::size_t, nfield> field_offsets{ detail::field_offsets_<T>() };
        using field_types = decltype(detail::field_types_<T>());
    };

#define _DEF_OFFSET(T,m) \
    template<auto T::*m>\
    struct _MemberStealer_ ##T##m\
    {\
        friend std::size_t _get_offset_ ##T##m(){return (std::size_t)&(((T*)nullptr)->*m);}\
        friend auto _get_type_ ##T##m(){return EasyLib::Type<std::remove_reference_t<decltype(((T*)nullptr)->*m)> >{};}\
    };\
    template struct _MemberStealer_ ##T##m<&T::m>;\
    std::size_t _get_offset_ ##T##m(); /*redeclare in global ns*/ \
    auto _get_type_ ##T##m(); /*redeclare in global ns*/ 

#define _GET_OFFSET(T,m) _get_offset_ ##T##m(),
#define _GET_TYPE(T,m)  decltype(_get_type_ ##T##m())::type,

    //! @brief used to reflect a non-aggregate type.
    //! @code
    //! struct Foo{
    //!     int a0{0};
    //! private:
    //!     float a1{0}; // this is unaccessible!!!
    //! };
    //! 
    //! // reflect Foo
    //! REFLECTION(Foo,a0,a1)
    //! 
    //! // usage:
    //! auto& member_offsets = Reflection<Foo>::field_offsets; // {0,4}
    //! using member_types   = Reflection<Foo>::field_types;   // Types<int,float>
    //! Foo foo{};
    //! using type_a1 = TypeOf<1, nember_types>;
    //! member_of<Foo,1>(foo) = 2; // ==> foo = {0,2};
    //! #endcode
#define REFLECTION(T, m1, ...) \
    FOR_EACH_TM(_DEF_OFFSET, T, m1, __VA_ARGS__)\
    template<> struct EasyLib::Reflection<T>\
    {\
        static_assert(std::is_class_v<T> && !std::is_aggregate_v<T>, "***ERROR*** type is aggregate!!!");\
        inline static constexpr std::size_t size_bytes = sizeof(T);\
        inline static constexpr std::size_t nfield = PP_NARG(__VA_ARGS__) + 1;\
        inline static const std::array<std::size_t, nfield> field_offsets{FOR_EACH_TM(_GET_OFFSET,T,m1,__VA_ARGS__)};\
        using field_types = EasyLib::Popback<EasyLib::Types<FOR_EACH_TM(_GET_TYPE,T,m1,__VA_ARGS__) void>>::type;\
    };

    //! @brief Get member count.
    //! @tparam Class  The class/struct type.
    template<typename Class>
    inline constexpr std::size_t member_count = Reflection<Class>::nfield;

    //! @brief Get member type list.
    //! @tparam Class  The class/struct type.
    template<typename Class>
    using member_types = typename Reflection<Class>::field_types;

    //! @brief Get type of the i-th member.
    //! @tparam Class  The class/struct type.
    //! @tparam I      The member index, >=0
    template<typename Class, std::size_t I>
    using member_type = TypeOf<I, typename Reflection<Class>::field_types>::type;

    //! @brief Get member offsets array.
    //! @tparam Class  The class/struct type.
    template<typename Class>
    inline auto& member_offsets() { return Reflection<Class>::field_offsets; }

    //! @brief Get offset in bytes of the i-th member.
    //! @tparam Class  The class/struct type.
    //! @tparam I      The member index, >=0
    template<typename Class, std::size_t I>
    inline std::size_t member_offset() { return std::get<I>(Reflection<Class>::field_offsets); }

    //! @brief Get reference of class member variable even if it is private or protect.
    //! @tparam Class  The class/struct type.
    //! @tparam I      The member index, >=0
    //! @param obj     Instance of type.
    //! @return Reference of the I-th member variable of \obj.
    template<typename Class, std::size_t I>
    auto& member_of(Class& obj)
    {
        using reft  = Reflection<std::remove_cvref_t<Class>>;
        using types = typename reft::field_types;
        using type  = typename TypeOf<I, types>::type;
        return *reinterpret_cast<type*>(reinterpret_cast<char*>(&obj) + std::get<I>(reft::field_offsets));
    }
    template<typename Class, std::size_t I>
    auto& member_of(const Class& obj)
    {
        using reft  = Reflection<std::remove_cvref_t<Class>>;
        using types = typename reft::field_types;
        using type  = typename TypeOf<I, types>::type;
        return *reinterpret_cast<const type*>(reinterpret_cast<const char*>(&obj) + std::get<I>(reft::field_offsets));
    }
}

/*
// function used to generate detail::field_offsets_
void gen_field_offsets_func(std::ostream& os)
{
    os <<
        "template<Aggregate T>\n"
        "inline auto field_offsets_()\n"
        "{\n"
        "constexpr std::size_t nf = num_fields_<T>();\n"
        "using array = std::array<std::size_t, nf>;\n"
        "if      constexpr (nf == 0)return array{};\n"
        "else if constexpr (nf == 1)return array{ 0 };\n"
    ;

    for (int i = 2; i <= 64; ++i) {
        os  << "else if constexpr (nf == " << i << ") {\n"
            << "    auto&[m1";
        for (int j = 2; j <= i; ++j)
            os << ",m" << j;
        os  << "] = *((T*)nullptr);\n"
            << "    return array{ (std::size_t)&m1";
        for (int j = 2; j <= i; ++j)
            os << ", (std::size_t)&m" << j;
        os << "};\n}\n";
    }
    os << "}\n";
}
// function used to generate detail::field_types_
void gen_field_types_func(std::ostream& os)
{
    os <<
        "template<Aggregate T>\n"
        "inline auto field_types_()\n"
        "{\n"
        "constexpr std::size_t nf = num_fields_<T>();\n"
        "if      constexpr (nf == 0)return Types<>{};\n"
        "else if constexpr (nf == 1) { auto [m1] = *((T*)nullptr); return Types<decltype(m1)>{}; }\n"
        ;

    for (int i = 2; i <= 64; ++i) {
        os << "else if constexpr (nf == " << i << ") { "
            << "auto[m1";
        for (int j = 2; j <= i; ++j)
            os << ",m" << j;
        os << "] = *((T*)nullptr); return Types<decltype(m1)";
        for (int j = 2; j <= i; ++j)os << ", decltype(m" << j << ')';
        os << ">{};}\n";
    }
    os << "}\n";
}
*/
