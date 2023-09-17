#include "HangmanEngine.hpp"

#include <iostream>

#include "JSONParser.hpp"

HangmanEngine HangmanEngine::instance;
HangmanEngine::HangmanEngine() {}
HangmanEngine& HangmanEngine::getInstance() { return instance; }

std::vector<std::string> HangmanEngine::getWords() {
  JSONParser& json = JSONParser::getInstance();

  const std::string current_dir = std::string(__FILE__).substr(
      0, std::string(__FILE__).find_last_of("/\\"));

  json.getFile(current_dir + "/../data/words.json");
  return {"Hello"};
}