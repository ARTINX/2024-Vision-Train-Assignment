#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  char c_str[101];
  if (str.length() > 100) {
    return 1;
  }
  std::memcpy(c_str, str.data(), str.length() + 1);
  char res_str[101];

  for (int i = 0; i < 101; ++i) {
    if (c_str[i] == '\0') {
      res_str[i--] = '\0';
      for (int j = 0; j <= i; ++j) {
        res_str[j] = c_str[i - j];
      }
      break;
    }
  }

  std::cout << res_str << std::endl;
  return 0;
}
