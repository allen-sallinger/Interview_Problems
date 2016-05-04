// reverse a given string
// a bee has a stinger should be
// eb dluohs regnits a sah eeb a

#include <iostream>
#include <string>

int main() {
  std::string str = "a bee has a stinger";

  std::cout << "The starting string: " << str << std::endl;

  std::cout << "The resulting string: ";
  for(std::string::reverse_iterator rit = str.rbegin(); rit != str.rend(); rit++){
    std::cout << *rit;
  }
  std::cout << std::endl;
  return 0;
}
