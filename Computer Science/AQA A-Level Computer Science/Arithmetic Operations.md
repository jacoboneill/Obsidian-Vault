# Arithmetic Operations
## Addition
The sum of two or more variables.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int a = 1;
	int b = 2;
	
	std::cout << a + b << std::endl; // OUTPUT: 3
	
	return 0;
}
```

## Subtraction
One value minus another.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int a = 2;
	int b = 1;
	
	std::cout << a - b << std::endl; // OUTPUT: 1
	
	return 0;
}
```

## Multiplication
The product of two values.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int a = 5;
	int b = 7;
	
	std::cout << a * b << std::endl; // OUTPUT: 35
	
	return 0;
}
```

## Division of Real Numbers
A Real Number is a number with a fractional part so may result in an answer with a fractional part
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double a = 6.2;
	double b = 2;
	
	std::cout << a / b << std::endl; // OUTPUT: 3.1
	
	return 0
}
```

## Division of Integers
An integer is a whole number, therefore may generate a number with a remainder. When an integer is divided by another and is expecting a fraction, the programming language will return the quotient
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int a = 3;
	int b = 2;
	
	std::cout << a / b << std::endl; // OUTPUT: 1
	
	return 0;
}
```

## Modulo
The modulo operator `%` is used to get the remainder after a divison.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int a = 3;
	int b = 2;
	
	std::cout << a % b << std::endl; // OUTPUT: 1
	
	return 0;
}
```

## Exponentiation
Repeated multiplication of a base number in the form $B^n$ where $B$ is the base number and $^n$ is the number of times to repeat the multiplication
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int B = 2;
	int n = 4;
	
	int answer = pow(B, n); // Equivelant of 2 * 2 * 2 * 2
	
	std::cout << answer << std::endl; // OUTPUT: 16
	
	return 0;
}
```

## Rounding
Replacing the real value with a simpler representation that is close to the original value.

```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double pi = 3.14159265359;
	int decimal_places = 2;
	
	std::cout << 
	round(pi * pow(10, decimal_places)) / pow(10, decimal_places)
	<< std::endl; // OUTPUT: 3.15
	
	return 0;
}
```

You can also round to the closest integer by doing:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double pi = 3.14159265359;
	
	std::cout << round(pi) << std::endl; // OUTPUT: 3
}
```

## Truncating
Truncation is the process of shortening a number by *x* digits.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double pi = 3.14159265359;
	int decimal_places = 3;
	
	std::cout << 
	trunc(pi * pow(10, decimal_places)) / pow(10, decimal_places)
	<< std::endl; // OUTPUT: 3.141
	
	return 0;
}
```

You can also truncate to no decimal places by doing:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double pi = 3.14159265359;
	
	std::cout << trunc(pi) << std::endl; // OUTPUT: 3
}
```

## Random Number Generation
Random number generation is typically done by calling a function with two values to have the random number generated between.
It can be very useful for:
- Creating a range of test data to be used on a new program
- Producing data to use in computer simulations
- Creating random events and movements in video games

Random values in a programming language are never truly random and are *pseudorandom*. This is because they are derived from a *seed*. Therefore it can never be truly random because you can replicate the results if you know the seed.
*random.org* uses atmospheric pressures to set the seed, most computers use the time to generate their numbers.

```cpp
#include <iostream>

int randomYear(int start, int end){
	int difference = end - start;
	return rand() % difference + start;
}

int main(int argc, char* argv[]){
	int rand_int_zero_ninetynine = rand() % 100;
	int rand_int_one_onehundred = rand() % 100 + 1;
	
	std::cout <<
	rand_int_zero_ninetynine << std::endl <<
	rand_int_one_onehundred << std::endl <<
	randomYear(1985, 2023) << std::endl;
	
	/*
		OUTPUT:
			46
			100
			1996
	*/
}
```