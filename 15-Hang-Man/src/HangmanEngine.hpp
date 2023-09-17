#include <string>
#include <vector>

#ifndef HANGMANENGINE_H
#define HANGMANENGINE_H

class HangmanEngine {
 public:
  static HangmanEngine& getInstance();
  void drawBoard();
  std::vector<std::string> getWords();

 private:
  HangmanEngine();
  HangmanEngine(const HangmanEngine&) = delete;
  HangmanEngine& operator=(const HangmanEngine) = delete;
  static HangmanEngine instance;

  std::vector<std::string> _frames;

  bool isCorrect();
};

#endif