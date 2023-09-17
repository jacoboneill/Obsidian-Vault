#include "JSONParser.hpp"

#include <fstream>
#include <iostream>
#include <string>

JSONParser JSONParser::instance;
JSONParser::JSONParser() {}
JSONParser& JSONParser::getInstance() { return instance; }

std::vector<std::string> JSONParser::getFile(std::string path) {
  std::string file = readFile(path);
  std::cout << file;
  return {"Hello"};
}

std::string JSONParser::readFile(std::string path) {
  std::ifstream json_file(path);

  if (!json_file.is_open()) {
    std::cerr << "Error: Unable to open the file" << std::endl;
    return "";
  }

  std::string file_contents;
  std::string line;
  while (std::getline(json_file, line)) {
    file_contents += line + '\n';
  }

  json_file.close();

  return file_contents;
}