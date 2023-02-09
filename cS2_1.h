#include <iostream>
#include <vector>

inline int solution(std::vector<int> iA) {
  int Max = -1000;
  for (int i = 0; i < (int)iA.size() - 1; i++) {
    Max = ((iA[i] * iA[i+1]) > Max) ? (iA[i] * iA[i+1]) : Max;
  }
  return Max;
}