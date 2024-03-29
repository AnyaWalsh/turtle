// http://turtle.sourceforge.net
//
// Copyright Mathieu Champlon 2014
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <turtle/mock.hpp>
#include <boost/test/unit_test.hpp>

namespace limitations_template_method_problem {
//[ limitations_template_method_problem
class concept_class
{
public:
    template<typename T>
    void method(T t);
};

template<typename T>
void function_under_test(T t) // T is supposed to model the previous concept
{
    t.method(42);
    t.method("string");
}
//]

//[ limitations_template_method_solution
MOCK_CLASS(mock_concept)
{
    MOCK_METHOD(method, 1, void(int), method_int)
    MOCK_METHOD(method, 1, void(const char*), method_string)
};
//]

BOOST_AUTO_TEST_CASE(mocked_templated_methods_are_called)
{
    mock_concept b;
    MOCK_EXPECT(b.method_int).once().with(42);
    MOCK_EXPECT(b.method_string).once().with(mock::equal(std::string("string")));
    function_under_test(b);
}
} // namespace limitations_template_method_problem

namespace limitations_template_method_problem_2 {
//[ limitations_template_method_problem_2
class concept_class
{
public:
    template<typename T>
    T create()
    {
        return T();
    }
};

template<typename T>
void function_under_test(T t) // T is supposed to model the previous concept
{
    t.template create<int>();
    t.template create<std::string>();
}
//]

//[ limitations_template_method_solution_2
MOCK_CLASS(mock_concept)
{
    template<typename T>
    T create();

    MOCK_METHOD(create_int, 0, int(), create_int)
    MOCK_METHOD(create_string, 0, std::string(), create_string)
};

template<>
int mock_concept::create<int>()
{
    return create_int();
}
template<>
std::string mock_concept::create<std::string>()
{
    return create_string();
}
//]

BOOST_AUTO_TEST_CASE(dispatch_methods_are_called)
{
    mock_concept b;
    MOCK_EXPECT(b.create_int).once().returns(0);
    MOCK_EXPECT(b.create_string).once().returns("");
    function_under_test(b);
}
} // namespace limitations_template_method_problem_2
