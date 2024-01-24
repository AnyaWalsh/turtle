// http://turtle.sourceforge.net
//
// Copyright Mathieu Champlon 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <turtle/mock.hpp>
#include <boost/test/unit_test.hpp>

namespace {
//[ limitations_const_parameter_warning_problem
class base
{
public:
    virtual void method(const int) = 0;
};
//]
} // namespace

namespace limitations_const_parameter_warning_explanation {
//[ limitations_const_parameter_warning_explanation
class derived : public base
{
public:
    virtual void method(const int);
};

void derived::method(int) {}
//]
} // namespace limitations_const_parameter_warning_explanation

namespace {
//[ limitations_const_parameter_warning_solution
MOCK_BASE_CLASS(mock_base, base)
{
    void method(const int i) { method_stub(i); }
    MOCK_METHOD(method_stub, 1, void(int), method)
};
//]
} // namespace

BOOST_AUTO_TEST_CASE(check_method_stub_is_called)
{
    mock_base b;
    MOCK_EXPECT(b.method).once().with(1);
    // Example user code taking a base* (or smart pointer variant)
    auto callMethod = [](base* bPtr) { bPtr->method(1); };
    callMethod(&b);
}
