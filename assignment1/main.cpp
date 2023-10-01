#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  char c_str[101];
  std::memcpy(c_str, str.data(), str.length() + 1);
  char res_str[101];

  /*
   *
   * write your code here
   *
   */

  std::cout << res_str << std::endl;
  return 0;
}
