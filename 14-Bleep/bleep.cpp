#include <iostream>
#include "Bleep.hpp"

int main(){
  std::string word = "broccoli";
  std::string text = "I really hate broccoli. Broccoli smells";

  Bleep bleeper(word, text);
  bleeper.censor();

  std::cout << text << std::endl;
}