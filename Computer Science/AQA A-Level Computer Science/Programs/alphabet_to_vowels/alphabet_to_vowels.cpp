#include <iostream>

bool isVowel(char character){
  std::string vowels = "aeiou";

  for(char vowel : vowels){
    if(character == vowel){
      return true;
    }
  }

  return false;
}

int main(int argc, char* argv[]){
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

  std::string vowels;

  for(char c : alphabet){
    if(isVowel(c)){
      vowels += c;
    }
  }

  std::cout << vowels << std::endl;
}
