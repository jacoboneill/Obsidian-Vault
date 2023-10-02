#include "calculator.hpp"

#include <iostream>
#include <string>
#include <vector>

bool Calculator::isDigit(std::string &input) {
  for (char i : input) {
    if (!std::isdigit(i)) {
      return false;
    }
  }
  return true;
}

bool Calculator::isOperator(std::string &input) {
  std::vector<std::string> operators = {"+", "-", "*", "/"};
  if (input.size() == 1) {
    for (std::string o : operators) {
      if (input == o) {
        return true;
      }
    }
  }
  return false;
}

bool Calculator::isValid() {
  if (_argc < 1) {
    return false;
  }

  int number_count;
  int operator_count;
  for (std::string a : _argv) {
    if (Calculator::isDigit(a)) {
      number_count++;
    }
    if (Calculator::isOperator(a)) {
      operator_count++;
    }
  }

  if (number_count == operator_count + 1) {
    return true;
  }

  return false;
}

double Calculator::calculate() {
  int index = getIndex("+");

  return 1.2;
}