#include <iostream>
#include <vector>
#include <string>

int main(){
  std::string phrase = "turpentine and turtles";

  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  std::vector<char> result;

  for(int i = 0; i < phrase.size(); i++){
    char phrase_char = phrase.at(i);
    for(int j = 0; j < vowels.size(); j++){
      char vowel = vowels[j];
      if(phrase_char == vowel){
        result.push_back(phrase_char);
        if(phrase_char == 'e' || phrase_char == 'u'){
          result.push_back(phrase_char);
        }
      }
    }
  }

  std::cout << std::string(result.begin(), result.end()) << std::endl;
}