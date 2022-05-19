#include <string>
#include <gtest/gtest.h>

TEST(String, Concatenation)
{
    std::string my_str("hello");
    my_str += " world!";

    ASSERT_EQ( my_str, "hello world!" );
}
