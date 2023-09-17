#include <iostream>
#include "Bleep.hpp"

int main(){
  std::string word = "broccoli";
  std::string text = "I really hate broccoli. Broccoli smells";

  Bleep bleeper(word, text);
  std::cout << bleeper.censor();
}