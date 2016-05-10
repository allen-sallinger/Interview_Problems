// string_int_conversion.cpp
// converts strings to ints and ints to strings

#include <string>
#include <iostream>

// int to string
std::string int_to_string(int x){
  std::string s;

  bool is_neg = false;

  if(x < 0)
    is_neg = true;

  do{
    s += '0' + x%10;
    x = x/10;
  } while(x);

  if(is_neg)
    s += '-';

  reverse(s.begin(), s.end());
  return s;
}

// string to int
int string_to_int(const std::string& s){
  int result = 0;
  bool is_neg = false;
  if(s[0] == '-')
    is_neg = true;

  for(int i = is_neg == false ? 0 : 1; i < s.size(); i++){
    int dig = s[i] - '0';
    result = result * 10 + dig;
  }

  return is_neg ? -result : result;
}

int main() {

  // TEST: int to string conversion
  std::cout << "Going to convert an int to string" << std::endl;
  std::cout << "54321 should be 54321" << std::endl;

  std::string s = int_to_string(54321);
  if(s == "54321"){
    std::cout << "Value was converted properly..." << std::endl;
    std::cout << "Value returned: " << s << std::endl;
  }

  else {
    std::cout << "Value was not converted properly!!!";
  }

  // TEST: neg string to neg int conversion
  std::cout << "Testing string to int: " << std::endl;
  std::cout << "\"-54321\" -> -54321" << std::endl;

  int sti = string_to_int("-54321");

  if(sti == -54321)
    std::cout << "neg string to int conversion successful" << std::endl;

  else
    std::cout << "neg string to int conversion failed" << std::endl;

  // TEST: string to int conversion
  std::cout << "\"54321\" -> 54321" << std::endl;
  sti = string_to_int("54321");

  if(sti == 54321)
    std::cout << "string to int conversion successful" << std::endl;

  else
    std::cout << "string to int conversion failed" << std::endl;

  std::cout << "Program terminating..." << std::endl;
  return 0;
}