#include <string>
#include <vector>

#ifndef JSONPARSER_H
#define JSONPARSER_H

class JSONParser {
 public:
  static JSONParser& getInstance();

  std::vector<std::string> getFile(std::string path);

 private:
  JSONParser();
  JSONParser(const JSONParser&) = delete;
  JSONParser& operator=(const JSONParser) = delete;
  static JSONParser instance;

  std::string readFile(std::string path);
  std::vector<std::string> parseFile(std::string file);
};

#endif