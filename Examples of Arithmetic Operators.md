---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
See [[Arithmetic Operations]]
# arithmetic_operations.cpp
```cpp
#include <iostream>
#include <cmath>

int addition(int x, int y){
	return x + y;
}

int subtraction(int x, int y){
	return x - y;
}

int multiplication(int x, int y){
	return x * y;
}

float divisionFloat(float x, float y){
	return x / y;
}

int divisionInteger(int x, int y){
	return x / y;
}

int modulo(int x, int y){
	return x % y;
}

int exponentiation(int B, int n){
	return pow(B, n);
}

float roundToDecimalPlace(float n, int decimal_places){
	int offset = pow(10, decimal_places);
	return round(n * offset) / offset;
}

int roundToZeroDecimalPlaces(float n){
	return round(n);
}

float truncateToDecimalPlace(float n, int decimal_places){
	int offset = pow(10, decimal_places);
	return trunc(n * offset) / offset;
}

int truncateToZeroDecimalPlaces(float n){
	return trunc(n);
}

int randomInteger(int start, int end){
	int difference = end - start;
	return rand() % difference + start;
}


int main(int argc, char* argv[]){
	std::cout <<
	"6 + 5 = " << addition(6, 5) << std::endl <<
	
	"10 - 8 = " << subtraction(10, 8) << std::endl <<
	
	"12 * 4 = " << 
		multiplication(12, 4) << std::endl <<
	
	"1 / 2 (float) = " << 
		divisionFloat(1, 2) << std::endl <<
	
	"1 / 2 (int) = " << 
		divisionInteger(1, 2) << std::endl <<
	
	"64 % 17 = " << modulo(64, 17) << std::endl <<
	
	"2^8 = " << exponentiation(2, 8) << std::endl <<
	
	"Round pi to 2dp = " << 
		roundToDecimalPlace(3.141, 2) << std::endl <<
	
	"Round pi = " << 
		roundToZeroDecimalPlaces(3.141) << std::endl <<
	
	"Truncate pi to 2dp = " << 
		truncateToDecimalPlace(3.141, 2) <<
		std::endl <<
	
	"Truncate pi = " << 
		truncateToZeroDecimalPlaces(3.141) <<
		std::endl <<
	
	"Random number between 1 - 2^16 = " << 
		randomInteger(1, pow(2,16)) << std::endl;
	
	return 0;
}

/*
	OUTPUT:
		6 + 5 = 11
		10 - 8 = 2
		12 * 4 = 48
		1 / 2 (float) = 0.5
		1 / 2 (int) = 0
		64 % 17 = 13
		2^8 = 256
		Round pi to 2dp = 3.14
		Round pi = 3
		Truncate pi to 2dp = 3
		Truncate pi = 3
		Random number between 1 - 2^16 = 1
*/
```