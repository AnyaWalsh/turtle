// http://turtle.sourceforge.net
//
// Copyright Mathieu Champlon 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// Intentionally duplicate to have complete examples and minimal user visible, yet tested test code
#include <boost/test/unit_test.hpp>

static void someFunctor(int newValue);
//[ invoke_functor_problem
#include <functional>

class base_class
{
public:
    virtual void method(const std::function<void(int)>& functor) = 0;
};

// the function will call 'method' with a functor to be applied
void function(base_class& c)
{
    c.method(someFunctor);
}
//]

// Some test-only code to verify what is described
static int receivedValue = 0;
static void someFunctor(int newValue)
{
    receivedValue = newValue;
}
// Check that the functor was called with 42
struct CheckReceivedValue
{
    void teardown()
    {
        BOOST_CHECK(receivedValue == 42); // functor was called and received the value 42
    }
};
// And force using it w/o showing that in the docs
#undef BOOST_AUTO_TEST_CASE
#define BOOST_AUTO_TEST_CASE(name) BOOST_FIXTURE_TEST_CASE(name, CheckReceivedValue)

//[ invoke_functor_solution
#include <turtle/mock.hpp>
#include <boost/test/unit_test.hpp>

namespace {
MOCK_BASE_CLASS(mock_class, base_class)
{
    MOCK_METHOD(method, 1)
};
} // namespace

BOOST_AUTO_TEST_CASE(how_to_invoke_a_functor_passed_as_parameter_of_a_mock_method)
{
    mock_class mock;
    MOCK_EXPECT(mock.method).calls([](const auto& functor) {
        functor(42);
    }); // whenever 'method' is called, invoke the functor with 42
    function(mock);
}
//]
