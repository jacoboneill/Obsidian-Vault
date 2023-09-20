#include <iostream>

int main() {
  // User Input
  double pesos;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  double reais;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  
  double soles;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Conversion
  pesos *= 0.057;
  reais *= 0.2;
  soles *= 0.27;

  double dollars = pesos + reais + soles;

  std::cout << "US Dollars = $" << dollars << '\n';
}