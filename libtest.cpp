#include <cstring>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

// taken from googletest which failed to compile
// https://github.com/google/googletest/blob/main/googletest/src/gtest.cc#L4891

std::string FormatByte(unsigned char value) {
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(2) << std::hex << std::uppercase
     << static_cast<unsigned int>(value);
  return ss.str();
}

std::string UrlEncode(const char* str) {
  std::string result;
  result.reserve(strlen(str) + 1);
  for (char ch = *str; ch != '\0'; ch = *++str) {
    switch (ch) {
      case '%':
      case '=':
      case '&':
      case '\n':
        result.append("%" + FormatByte(static_cast<unsigned char>(ch)));
        break;
      default:
        result.push_back(ch);
        break;
    }
  }
  return result;
}

int main()
{
    std::cout << UrlEncode("?param=value") << std::endl;
}