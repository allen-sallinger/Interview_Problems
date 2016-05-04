/* bit_parity.cpp                        */
/* Author: Allen Sallinger               */
/* Date: 1/15/2016                       */
/* Determines the bit parity of a word.  */

#include <iostream>


/* linear portion */
bool linear_parity(unsigned int x){
  int result = 0;

  while(x){
    result += (x & 1);
    x >>= 1;
  }

  if(result % 2 == 0)
    return 0;

  else
    return 1;
}

int main(){
  unsigned int x1 = 10101000; /* odd */
  unsigned int x2 = 11111111; /* even */

  std::cout << "if parity is even 0 is displayed, if odd 1 is displayed" << std::endl;

  std::cout << "testing O(N) solution..." << std::endl;

  bool result = linear_parity(x1);
  std::cout << "x1 test..." << std::endl;
  std::cout << "parity of x1 is: " <<  result << std::endl;

  result = linear_parity(x2);
  std::cout << "x2 test..." << std::endl;
  std::cout << "parity of x2 is: " <<  result << std::endl;


  return 0;
}