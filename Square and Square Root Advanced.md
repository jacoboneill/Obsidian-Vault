---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
See [[Square and Square Root]] for the previous version

# square_square_root_advanced.cpp
```cpp
/*
 * Other Mathematical Expressions:
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
		std::cout << "x: " << truncate(x, accuracy) << 
		" | buffer: " << truncate(buffer, accuracy) << 
		" | difference: " << truncate(x, accuracy) - truncate(buffer, accuracy) 
		<< std::endl;
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

/*
	OUTPUT:
		144
		x: 1 | buffer: -1 | difference: 2
		x: 72.5 | buffer: 1 | difference: 71.5
		x: 37.24 | buffer: 72.5 | difference: -35.26
		x: 20.55 | buffer: 37.24 | difference: -16.69
		x: 13.78 | buffer: 20.55 | difference: -6.77
		x: 12.11 | buffer: 13.78 | difference: -1.67
		x: 12 | buffer: 12.11 | difference: -0.11
		12
		3
		1
		288
		0.352941
		0
		24
		3
		77
		8
*/
```