#include <iostream>

int main() {
  // Age of Maisie
  int dog_age = 9;

  int early_years = 21; // First 2 years = 2:21
  int late_years = (dog_age - 2) * 4; // After this, it is 1:4
  int human_years = early_years + late_years;

  std::cout << "My name is Maisie! Ruff ruff, I am " << human_years << " years old in human years.\n";
}