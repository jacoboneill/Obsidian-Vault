/*
 *  Must include:
 *    -[x] Subroutine (void)
 *    -[x] Function
 *    -[x] Subroutine or Function Call
 *    -[x] Parameter or Argument
 *    -[x] Local Variable
 *    -[x] Global Variable
 */

#include <iostream>
#include <cmath>

int BABYLON_GUESS = 1;
int ACCURACY = 2;
bool DEBUG = true;

double square(double input){
  return std::pow(input, 2);
}

double truncate(double input){
  return trunc(input * pow(10, ACCURACY)) / pow(10, ACCURACY);
}

void debug_mode(double x, double buffer){
  if(DEBUG){
    std::cout << "x: " << truncate(x) << " | buffer: " << truncate(buffer) << " | difference: " << truncate(x) - truncate(buffer) << std::endl;
  }
}

double square_root(double input){
  if(input < 0){
    std::cerr << "Error, imaginary numbers not currently supported.";
  }

  if(BABYLON_GUESS < 0){
    std::cerr << "Error, first guess must be larger than 0.";
  }

  // Use babylon method

  // Make a guess;
  double buffer = -1;
  double x = BABYLON_GUESS;

  // Iterate until buffer and x converge via ACCURACY
  while(truncate(x) != truncate(buffer)){
    debug_mode(x, buffer);

    buffer = x;
    x = (buffer + input / buffer) / 2;
  }

  return x;
}

int main(int argc, char* argv[]){
  std::cout <<
    square(12) << std::endl <<
    square_root(144) <<
  std::endl;
}


