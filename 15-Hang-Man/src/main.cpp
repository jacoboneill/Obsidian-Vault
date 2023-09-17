#include <iostream>

#include "HangmanEngine.hpp"
#include "HangmanFrontendTUI.hpp"

int main() {
  HangmanEngine& engine = HangmanEngine::getInstance();
  engine.getWords();
}