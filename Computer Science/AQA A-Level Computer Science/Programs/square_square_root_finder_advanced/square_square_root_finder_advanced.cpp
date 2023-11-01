/*
 *  Other Mathematical Expressions:
 * - [x] Add
 * - [x] Subtract
 * - [x] Multiply
 * - [x] Divide (double and int)
 * - [x] Modulo
 * - [x] Exponentiation
 * - [x] Rounding
 * - [x] Truncate
 * - [x] Random Number Generator
 * - [x] Square Root
 */

#include <iostream>
#include <cmath>
#include <sys/types.h>

bool DEBUG = true;

double square(double input){
  return std::pow(input, 2);
}

double truncate(double input, int accuracy){
  return trunc(input * pow(10, accuracy)) / pow(10, accuracy);
}

void debug_mode(double x, double buffer, int accuracy){
  if(DEBUG){
    std::cout << "x: " << truncate(x, accuracy) << " | buffer: " << truncate(buffer, accuracy) << " | difference: " << truncate(x, accuracy) - truncate(buffer, accuracy) << std::endl;
  }
}

double square_root(double input, int accuracy){
  int babylon_guess = 1;

  if(input < 0){
    std::cerr << "Error, imaginary numbers not currently supported.";
  }

  if(babylon_guess < 0){
    std::cerr << "Error, first guess must be larger than 0.";
  }

  // Use babylon method

  // Make a guess;
  double buffer = -1;
  double x = babylon_guess;

  // Iterate until buffer and x converge via accuracy
  while(truncate(x, accuracy) != truncate(buffer, accuracy)){
    debug_mode(x, buffer, accuracy);

    buffer = x;
    x = (buffer + input / buffer) / 2;
  }

  return x;
}

double add(double a, double b){
  return a + b;
}

double subtract(double a, double b){
  return a - b;
}

double multiply(double a, double b){
  return a * b;
}

double divide(double a, double b){
  return a / b;
}

int divide(int a, int b){
  return a / b;
}

int modulo(int n, int d){
  return n % d;
}

double round(double in, int dp){
  return (in * pow(10, dp)) / pow(10, dp);
}

int randInt(int start, int end){
  return rand() % (start - end) + start;
}

int randInt(int start, int end, uint seed){
  srand(seed);
  return randInt(start, end);
}


int main(int argc, char* argv[]){
  std::cout <<
    square(12) << std::endl <<
    square_root(144, 2) << std::endl << 
    add(1, 2) << std::endl <<
    subtract(2, 1) << std::endl <<
    multiply(12, 24) << std::endl <<
    divide(1.2, 3.4) << std::endl <<
    divide(1, 2) << std::endl <<
    modulo(486, 33) << std::endl <<
    round(3.141) << std::endl <<
    randInt(1, 100) << std::endl <<
    randInt(1, 100, 4) <<
  std::endl;

  return 0;
}


