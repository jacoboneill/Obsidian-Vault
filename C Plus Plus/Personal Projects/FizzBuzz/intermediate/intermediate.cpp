#include <iostream>

int main(int argc, char* argv[]){
  int start = 1;
  int end = 100;

  for(int i = start; i <= end; i++){
    std::string output = "";
    if(i % 3 == 0){ output += "Fizz"; }
    if(i % 5 == 0){ output += "Buzz"; }

    if(output == ""){ output = std::to_string(i); }

    std::cout << output << std::endl;
  }

  return 0;
}
