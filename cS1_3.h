#include <string>
inline bool solution(std::string inputString) {
  for(int i = 0; i < (int)inputString.length()/2; i++){
    if (inputString[i] != inputString[inputString.length() - i - 1])
      return false;
  }
  return true;
}