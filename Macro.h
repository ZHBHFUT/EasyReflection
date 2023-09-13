#pragma once

/* NOTE: User should use the /Zc:preprocessor compiler switch for MSVC. */
#if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
#error "/Zc:preprocessor compiler switch must enable!!!"
#endif

/*
* PP_NARG(...) Get number of variadic arguments number.
* 
* For example:
*     int N = PP_NARG(a1,a2,a3);  ==> N = 3
*/

#define _EXPAND_(x) x
#define _PP_ARG_N_( \
          _1, _2, _3, _4, _5, _6, _7, _8, _9,_10, \
         _11,_12,_13,_14,_15,_16,_17,_18,_19,_20, \
         _21,_22,_23,_24,_25,_26,_27,_28,_29,_30, \
         _31,_32,_33,_34,_35,_36,_37,_38,_39,_40, \
         _41,_42,_43,_44,_45,_46,_47,_48,_49,_50, \
         _51,_52,_53,_54,_55,_56,_57,_58,_59,_60, \
         _61,_62,_63,N,...) N
#define PP_NARG(...) _EXPAND_(_PP_ARG_N_(__VA_ARGS__,\
         63,62,61,60,                   \
         59,58,57,56,55,54,53,52,51,50, \
         49,48,47,46,45,44,43,42,41,40, \
         39,38,37,36,35,34,33,32,31,30, \
         29,28,27,26,25,24,23,22,21,20, \
         19,18,17,16,15,14,13,12,11,10, \
         9,8,7,6,5,4,3,2,1,0))

#define _FOR1(F,m1) F(m1)
#define _FOR2(F,m1,m2 ) _FOR1(F,m1),_FOR1(F,m2)
#define _FOR3(F,m1,...) _FOR1(F,m1),_FOR2(F,__VA_ARGS__)
#define _FOR4(F,m1,...) _FOR1(F,m1),_FOR3(F,__VA_ARGS__)
#define _FOR5(F,m1,...) _FOR1(F,m1),_FOR4(F,__VA_ARGS__)
#define _FOR6(F,m1,...) _FOR1(F,m1),_FOR5(F,__VA_ARGS__)
#define _FOR7(F,m1,...) _FOR1(F,m1),_FOR6(F,__VA_ARGS__)
#define _FOR8(F,m1,...) _FOR1(F,m1),_FOR7(F,__VA_ARGS__)
#define _FOR9(F,m1,...) _FOR1(F,m1),_FOR8(F,__VA_ARGS__)
#define _FOR10(F,m1,...) _FOR1(F,m1),_FOR9(F,__VA_ARGS__)
#define _FOR11(F,m1,...) _FOR1(F,m1),_FOR10(F,__VA_ARGS__)
#define _FOR12(F,m1,...) _FOR1(F,m1),_FOR11(F,__VA_ARGS__)
#define _FOR13(F,m1,...) _FOR1(F,m1),_FOR12(F,__VA_ARGS__)
#define _FOR14(F,m1,...) _FOR1(F,m1),_FOR13(F,__VA_ARGS__)
#define _FOR15(F,m1,...) _FOR1(F,m1),_FOR14(F,__VA_ARGS__)
#define _FOR16(F,m1,...) _FOR1(F,m1),_FOR15(F,__VA_ARGS__)
#define _FOR17(F,m1,...) _FOR1(F,m1),_FOR16(F,__VA_ARGS__)
#define _FOR18(F,m1,...) _FOR1(F,m1),_FOR17(F,__VA_ARGS__)
#define _FOR19(F,m1,...) _FOR1(F,m1),_FOR18(F,__VA_ARGS__)
#define _FOR20(F,m1,...) _FOR1(F,m1),_FOR19(F,__VA_ARGS__)
#define _FOR21(F,m1,...) _FOR1(F,m1),_FOR20(F,__VA_ARGS__)
#define _FOR22(F,m1,...) _FOR1(F,m1),_FOR21(F,__VA_ARGS__)
#define _FOR23(F,m1,...) _FOR1(F,m1),_FOR22(F,__VA_ARGS__)
#define _FOR24(F,m1,...) _FOR1(F,m1),_FOR23(F,__VA_ARGS__)
#define _FOR25(F,m1,...) _FOR1(F,m1),_FOR24(F,__VA_ARGS__)
#define _FOR26(F,m1,...) _FOR1(F,m1),_FOR25(F,__VA_ARGS__)
#define _FOR27(F,m1,...) _FOR1(F,m1),_FOR26(F,__VA_ARGS__)
#define _FOR28(F,m1,...) _FOR1(F,m1),_FOR27(F,__VA_ARGS__)
#define _FOR29(F,m1,...) _FOR1(F,m1),_FOR28(F,__VA_ARGS__)
#define _FOR30(F,m1,...) _FOR1(F,m1),_FOR29(F,__VA_ARGS__)
#define _FOR31(F,m1,...) _FOR1(F,m1),_FOR30(F,__VA_ARGS__)
#define _FOR32(F,m1,...) _FOR1(F,m1),_FOR31(F,__VA_ARGS__)
#define _FOR33(F,m1,...) _FOR1(F,m1),_FOR32(F,__VA_ARGS__)
#define _FOR34(F,m1,...) _FOR1(F,m1),_FOR33(F,__VA_ARGS__)
#define _FOR35(F,m1,...) _FOR1(F,m1),_FOR34(F,__VA_ARGS__)
#define _FOR36(F,m1,...) _FOR1(F,m1),_FOR35(F,__VA_ARGS__)
#define _FOR37(F,m1,...) _FOR1(F,m1),_FOR36(F,__VA_ARGS__)
#define _FOR38(F,m1,...) _FOR1(F,m1),_FOR37(F,__VA_ARGS__)
#define _FOR39(F,m1,...) _FOR1(F,m1),_FOR38(F,__VA_ARGS__)
#define _FOR40(F,m1,...) _FOR1(F,m1),_FOR39(F,__VA_ARGS__)
#define _FOR41(F,m1,...) _FOR1(F,m1),_FOR40(F,__VA_ARGS__)
#define _FOR42(F,m1,...) _FOR1(F,m1),_FOR41(F,__VA_ARGS__)
#define _FOR43(F,m1,...) _FOR1(F,m1),_FOR42(F,__VA_ARGS__)
#define _FOR44(F,m1,...) _FOR1(F,m1),_FOR43(F,__VA_ARGS__)
#define _FOR45(F,m1,...) _FOR1(F,m1),_FOR44(F,__VA_ARGS__)
#define _FOR46(F,m1,...) _FOR1(F,m1),_FOR45(F,__VA_ARGS__)
#define _FOR47(F,m1,...) _FOR1(F,m1),_FOR46(F,__VA_ARGS__)
#define _FOR48(F,m1,...) _FOR1(F,m1),_FOR47(F,__VA_ARGS__)
#define _FOR49(F,m1,...) _FOR1(F,m1),_FOR48(F,__VA_ARGS__)
#define _FOR50(F,m1,...) _FOR1(F,m1),_FOR49(F,__VA_ARGS__)
#define _FOR51(F,m1,...) _FOR1(F,m1),_FOR50(F,__VA_ARGS__)
#define _FOR52(F,m1,...) _FOR1(F,m1),_FOR51(F,__VA_ARGS__)
#define _FOR53(F,m1,...) _FOR1(F,m1),_FOR52(F,__VA_ARGS__)
#define _FOR54(F,m1,...) _FOR1(F,m1),_FOR53(F,__VA_ARGS__)
#define _FOR55(F,m1,...) _FOR1(F,m1),_FOR54(F,__VA_ARGS__)
#define _FOR56(F,m1,...) _FOR1(F,m1),_FOR55(F,__VA_ARGS__)
#define _FOR57(F,m1,...) _FOR1(F,m1),_FOR56(F,__VA_ARGS__)
#define _FOR58(F,m1,...) _FOR1(F,m1),_FOR57(F,__VA_ARGS__)
#define _FOR59(F,m1,...) _FOR1(F,m1),_FOR58(F,__VA_ARGS__)
#define _FOR60(F,m1,...) _FOR1(F,m1),_FOR59(F,__VA_ARGS__)
#define _FOR61(F,m1,...) _FOR1(F,m1),_FOR60(F,__VA_ARGS__)
#define _FOR62(F,m1,...) _FOR1(F,m1),_FOR61(F,__VA_ARGS__)
#define _FOR63(F,m1,...) _FOR1(F,m1),_FOR62(F,__VA_ARGS__)
#define _FOR64(F,m1,...) _FOR1(F,m1),_FOR63(F,__VA_ARGS__)

#define _FOR_N3_(N,...) _FOR ## N(__VA_ARGS__)
#define _FOR_N2_(N,...) _FOR_N3_(N, __VA_ARGS__)

/*
* Loop each argument for variadic arguments.
*     F   -- Function used to proceed one argument.
*     ... -- Arguments
* 
* For example:
*     #define FORWARD(a) a
*     printf("{%d,%d,%d}",FOR_EACH(FORWARD,1,2,3)); // --> printf("{%d,%d,%d}",1,2,3);
* 
* NOTE: This macro can't work if not use the /Zc:preprocessor compiler switch for MSVC.
*/
#define FOR_EACH(F,...) _FOR_N2_(PP_NARG(__VA_ARGS__),F,__VA_ARGS__)
