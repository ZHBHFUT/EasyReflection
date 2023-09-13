# EasyReflection

An simple head-only static reflection library.

## About The Project

Main features:
1. Automatic reflect aggregate types.
2. Use one macro to reflect non-aggregate type.
3. Read/write pravite members.
4. Query member number and type.

Please see [cppreference](https://en.cppreference.com/w/cpp/language/aggregate_initialization) if you don't known what's aggregate type.

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
constexpr auto nfield_Foo = Reflection<Foo>::nfield; //--> 3
using field_types_Foo = Reflection<Foo>::field_types; //--> Types<int,char,float>
auto& field_offsets_Foo = Reflection<Foo>::field_offsets; //--> std::array<size_t,3>{0,4,8}
using type_Foo_a1 = typename TypeOf<1, field_types_Foo>::type; //--> char
member_of<Foo, 2>(foo) = 1; //--> foo={0,0,1}, i.e. foo.a2=1

static_assert(nfield_Foo == 3);
static_assert(std::is_same_v<field_types_Foo, Types<int, char, float>>);
assert(field_offsets_Foo[0] == offsetof(Foo, a0));
assert(field_offsets_Foo[1] == offsetof(Foo, a1));
assert(field_offsets_Foo[2] == offsetof(Foo, a2));
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
constexpr auto nfield_Bar = Reflection<Bar>::nfield;
using field_types_Bar = Reflection<Bar>::field_types;
auto& field_offsets_Bar = Reflection<Bar>::field_offsets; //--> std::array<size_t,3>{0,4,8}
using type_Bar_a1 = typename TypeOf<2, field_types_Bar>::type; //--> float
member_of<Bar, 2>(bar) = 1; //--> bar={0,0,1}, i.e. bar.a2=1

static_assert(nfield_Bar == 3);
static_assert(std::is_same_v<field_types_Bar, Types<int, char, float>>);
assert(field_offsets_Bar[0] == offsetof(Foo, a0));
assert(field_offsets_Bar[1] == offsetof(Foo, a1));
assert(field_offsets_Bar[2] == Bar::offset_a2());
assert((member_of<Bar, 2>(bar) == bar.get_a2()));
```

Please see `demo.cpp` to get complete demostration.
