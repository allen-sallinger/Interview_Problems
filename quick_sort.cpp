/*
  Author: Allen Sallinger
  Date: 11/03/2015
  Implement Quick Sort
*/

#include <iostream>
#include <vector>
#include <algorithm>

int partition(std::vector<int>& a, int low, int high){
  int pivot = a[high];

  int i = low;

  for(int j = low; j < high-1; j++){
    if(a[j] <= pivot){
      std::swap(a[i], a[j]);
      i = i + 1;
    }
  }
  std::swap(a[i], a[high]);
  return i;
}

void qsort(std::vector<int>& a, int low, int high){
  if(low < high){
    int p = partition(a, low, high);
    qsort(a, low, p - 1);
    qsort(a, p + 1, high);
  }
}

int main() {

  int num;
  std::cout << "Enter numbers, to stop entering numbers enter -1: " << std::endl;
  std::cin >> num;
  std::vector<int> a;

  
  while(num != -1){
    a.push_back(num);
    std::cin >> num;
  }

  qsort(a, 0, a.size());

  for(const auto& k : a)
    std::cout << k << std::endl;

  return 0;
  
}
