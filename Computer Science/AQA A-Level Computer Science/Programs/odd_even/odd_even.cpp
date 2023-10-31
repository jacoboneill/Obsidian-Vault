#include <iostream>

std::string appendNumber(std::string string, int number){
  if(string.size() > 0){
    string += ", ";
  }
  string += std::to_string(number);
  return string;
}

int main(int argc, char* argv[]){
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::string odd;
  std::string even;

  for(int n : numbers){
    if(n % 2 == 0){ // is even
      even = appendNumber(even, n);
    } else {
      odd = appendNumber(odd, n);
    }
  }

  std::cout <<
    "Odd: " << odd << std::endl <<
    "Even: " << even << std::endl;
}
