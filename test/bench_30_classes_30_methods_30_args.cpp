// http://turtle.sourceforge.net
//
// Copyright Mathieu Champlon 2011
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <turtle/mock.hpp>
#ifdef _MSC_VER
#    pragma warning(disable : 4505)
#endif

namespace {
class base_class
{
public:
    virtual ~base_class() = default;
    virtual void f1(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f2(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f3(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f4(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f5(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f6(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f7(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f8(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f9(int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int,
                    int) = 0;
    virtual void f10(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f11(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f12(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f13(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f14(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f15(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f16(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f17(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f18(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f19(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f20(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f21(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f22(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f23(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f24(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f25(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f26(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f27(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f28(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f29(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
    virtual void f30(int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int,
                     int) = 0;
};

MOCK_BASE_CLASS(mock_class_1, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_2, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_3, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_4, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_5, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_6, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_7, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_8, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_9, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_10, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_11, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_12, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_13, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_14, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_15, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_16, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_17, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_18, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_19, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_20, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_21, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_22, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_23, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_24, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_25, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_26, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_27, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_28, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_29, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};
MOCK_BASE_CLASS(mock_class_30, base_class)
{
    MOCK_METHOD(f1, 30)
    MOCK_METHOD(f2, 30)
    MOCK_METHOD(f3, 30)
    MOCK_METHOD(f4, 30)
    MOCK_METHOD(f5, 30)
    MOCK_METHOD(f6, 30)
    MOCK_METHOD(f7, 30)
    MOCK_METHOD(f8, 30)
    MOCK_METHOD(f9, 30)
    MOCK_METHOD(f10, 30)
    MOCK_METHOD(f11, 30)
    MOCK_METHOD(f12, 30)
    MOCK_METHOD(f13, 30)
    MOCK_METHOD(f14, 30)
    MOCK_METHOD(f15, 30)
    MOCK_METHOD(f16, 30)
    MOCK_METHOD(f17, 30)
    MOCK_METHOD(f18, 30)
    MOCK_METHOD(f19, 30)
    MOCK_METHOD(f20, 30)
    MOCK_METHOD(f21, 30)
    MOCK_METHOD(f22, 30)
    MOCK_METHOD(f23, 30)
    MOCK_METHOD(f24, 30)
    MOCK_METHOD(f25, 30)
    MOCK_METHOD(f26, 30)
    MOCK_METHOD(f27, 30)
    MOCK_METHOD(f28, 30)
    MOCK_METHOD(f29, 30)
    MOCK_METHOD(f30, 30)
};

mock_class_1 c_1;
mock_class_2 c_2;
mock_class_3 c_3;
mock_class_4 c_4;
mock_class_5 c_5;
mock_class_6 c_6;
mock_class_7 c_7;
mock_class_8 c_8;
mock_class_9 c_9;
mock_class_10 c_10;
mock_class_11 c_11;
mock_class_12 c_12;
mock_class_13 c_13;
mock_class_14 c_14;
mock_class_15 c_15;
mock_class_16 c_16;
mock_class_17 c_17;
mock_class_18 c_18;
mock_class_19 c_19;
mock_class_20 c_20;
mock_class_21 c_21;
mock_class_22 c_22;
mock_class_23 c_23;
mock_class_24 c_24;
mock_class_25 c_25;
mock_class_26 c_26;
mock_class_27 c_27;
mock_class_28 c_28;
mock_class_29 c_29;
mock_class_30 c_30;
} // namespace

int main()
{
    return 0;
}
