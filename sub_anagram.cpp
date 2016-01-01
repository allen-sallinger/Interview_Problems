/*
  See if a substring of string s1 contains an anagram of a second string s2.

  Allen Sallinger 11/03/2105
*/


#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
// str2map

std::unordered_map<char, int> str2map(std::string s){
  std::unordered_map<char, int> m;

  for(int i = 0; i < s.size(); i++){
    if(m.find(s[i]) == m.end())
      m[s[i]] = 1;
    else
      m[s[i]] += 1;
  }

  return m;
}

// sub_ana
bool sub_ana(std::string s1, std::string s2){

  std::unordered_map<char, int> m2 = str2map(s2);

  std::string sseg = "";

  int front = 0;
  for(front = 0; front < s2.size(); front++)
    sseg.push_back(s1[front]);

  std::unordered_map<char, int> m1 = str2map(sseg);
  if(m1 == m2)
    return true;
  
  for(front; front < s1.size(); front++){
    sseg.erase(sseg.front());
    sseg.push_back(s1[front]);

    m1 = str2map(sseg);
    if(m1 == m2)
      return true;
  }

  return false;
  
}



int main(){
  std::string s1;
  std::string s2;

  std::cout << "Please two strings: " << std::endl;
  std::cin >> s1;
  std::cin >> s2;

  // sub_ana
  std::cout << (sub_ana(s1, s2) ? "true" : "false") << std::endl;
  
  return 0;
}
