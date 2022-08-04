// online version at https://godbolt.org/z/v1EeWEGYW
#include <string>

std::string GetHello()
{
    return std::string{"ello"};
}

int main()
{
    ("H" + GetHello());
}