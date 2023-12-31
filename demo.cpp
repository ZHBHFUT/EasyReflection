#include <cassert>

#include "Reflection.hpp"

struct Foo
{
    int a0{ 0 };
    char a1{ 0 };
    float a2{ 0 };
};

class Bar
{
public:
    int a0{ 0 };
    char a1{ 0 };

    inline static constexpr auto offset_a2() { return offsetof(Bar, a2); }
    inline auto get_a2()const { return a2; }
private:
    float a2{ 0 };
};

//REFLECTION(Foo,a0,a1,a2) // This is unnecessary and will raise compiler error.

// Only non-aggregated type need this MACRO.
REFLECTION(Bar, a0, a1, a2)

int main()
{
    using namespace EasyLib;

    // 1) for aggregate type
    constexpr auto nfield_Foo = member_count<Foo>; //--> 3
    using field_types_Foo     = member_types<Foo>; //--> Types<int,char,float>
    auto&& field_offsets_Foo  = member_offsets<Foo>(); //--> std::array<size_t,3>{0,4,8}
    using type_Foo_a1         = member_type<Foo, 0>; //--> char
    
    static_assert(nfield_Foo == 3);
    static_assert(std::is_same_v<field_types_Foo, Types<int, char, float>>);
    static_assert(member_count<Foo> == 3);
    assert((field_offsets_Foo[0] == offsetof(Foo, a0)));
    assert((field_offsets_Foo[1] == offsetof(Foo, a1)));
    assert((field_offsets_Foo[2] == offsetof(Foo, a2)));
    
    Foo foo{};
    member_of<Foo, 2>(foo) = 1; //--> foo={0,0,1}, i.e. foo.a2=1
    assert((member_offset<Foo, 1>() == offsetof(Foo, a1)));

    // 2) for non-aggregated type
    constexpr auto nfield_Bar = member_count<Bar>; //--> 3
    using field_types_Bar     = member_types<Bar>; //--> Types<int,char,float>
    auto&& field_offsets_Bar  = member_offsets<Bar>(); //--> std::array<size_t,3>{0,4,8}
    using type_Bar_a1         = member_type<Bar,2>; //--> float
    
    static_assert(nfield_Bar == 3);
    static_assert(std::is_same_v<field_types_Bar, Types<int, char, float>>);
    assert((field_offsets_Bar[0] == offsetof(Foo, a0)));
    assert((field_offsets_Bar[1] == offsetof(Foo, a1)));
    assert((field_offsets_Bar[2] == Bar::offset_a2()));
    
    Bar bar{};
    member_of<Bar, 2>(bar) = 1; //--> bar={0,0,1}, i.e. bar.a2=1
    assert((member_of<Bar, 2>(bar) == bar.get_a2()));

    return 0;
}
