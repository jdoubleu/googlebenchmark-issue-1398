#include <string>

std::string GetHello()
{
    return std::string{"ello"};
}

std::string SomeFunc()
{
    std::string msg{};
    msg.append("H" + GetHello());

    return msg;
}

int main()
{
    // do nothing
}