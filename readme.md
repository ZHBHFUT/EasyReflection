# EasyReflection

An simple head-only static reflection library.

## About The Project

### Main features
1. Automatic reflect aggregate types.
2. Use one macro to reflect non-aggregate type.
3. Read/write pravite members.
4. Query member number and type.

Please see [cppreference](https://en.cppreference.com/w/cpp/language/aggregate_initialization) if you don't known what's aggregate type.

### Table of functions
Name|Function
|---|---|
REFLECTION(type,m0,...)|A variadic macro used to reflect non-aggregate type.
member_count|Get member number at compiler time.
member_types|Get member type list at compiler time.
member_type|Get i-th member type at compiler time.
member_offsets|Get offset in bytes of all members at run-time.
member_offset|Get offset in bytes of i-th member at run-time.
member_of|Get reference of i-th member of one instance.

## Getting Started

### Include head file

```cpp
#include "Reflection.hpp"
```

### Aggregate type reflection

1. Define your type:
```cpp
struct Foo
{
    int a0{ 0 };
    char a1{ 0 };
    float a2{ 0 };
};
```
2. Use reflection:
```cpp
Foo foo{};
constexpr auto nfield_Foo = member_count<Foo>; //--> 3
using field_types_Foo     = member_types<Foo>; //--> Types<int,char,float>
auto&& field_offsets_Foo  = member_offsets<Foo>(); //--> std::array<size_t,3>{0,4,8}
using type_Foo_a1         = member_type<Foo, 0>; //--> char
member_of<Foo, 2>(foo) = 1; //--> foo={0,0,1}, i.e. foo.a2=1

static_assert(nfield_Foo == 3);
static_assert(std::is_same_v<field_types_Foo, Types<int, char, float>>);
static_assert(member_count<Foo> == 3);
assert((field_offsets_Foo[0] == offsetof(Foo, a0)));
assert((field_offsets_Foo[1] == offsetof(Foo, a1)));
assert((field_offsets_Foo[2] == offsetof(Foo, a2)));
assert((member_offset<Foo, 1>() == offsetof(Foo, a1)));
```

### Non-aggregate type reflection

1. Define your type and reflect it:
```cpp
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
REFLECTION(Bar, a0, a1, a2)
```
2. Use reflection:
```cpp
Bar bar{};
constexpr auto nfield_Bar = member_count<Bar>; //--> 3
using field_types_Bar     = member_types<Bar>; //--> Types<int,char,float>
auto&& field_offsets_Bar  = member_offsets<Bar>(); //--> std::array<size_t,3>{0,4,8}
using type_Bar_a1         = member_type<Bar,2>; //--> float
member_of<Bar, 2>(bar) = 1; //--> bar={0,0,1}, i.e. bar.a2=1

static_assert(nfield_Bar == 3);
static_assert(std::is_same_v<field_types_Bar, Types<int, char, float>>);
assert((field_offsets_Bar[0] == offsetof(Foo, a0)));
assert((field_offsets_Bar[1] == offsetof(Foo, a1)));
assert((field_offsets_Bar[2] == Bar::offset_a2()));
assert((member_of<Bar, 2>(bar) == bar.get_a2()));
```

Please see [demo.cpp](./demo.cpp) to get complete demostration.
