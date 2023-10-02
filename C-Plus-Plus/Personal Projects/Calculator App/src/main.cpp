#include <iostream>

#include "calculator.hpp"

// int main(int argc, char const* argv[]) {
//   Calculator& calculator = Calculator::getInstance(argc, argv);

//   if (calculator.isValid()) {
//     std::cout << calculator.calculate();
//     return 0;
//   } else {
//     std::cout << "Error, arguments invalid.";
//     return 1;
//   }
// }

int main(int argc, char const* argv[]) {
  Calculator& calculator = Calculator::getInstance(argc, argv);

  std::cout << calculator.isValid();
}