---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
See [[Square and Square Root Advanced]] for the next version

# square_square_root_finder.cpp
```cpp
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
    std::cout << 
	    "x: " << truncate(x) << 
	    " | buffer: " << truncate(buffer) << 
		" | difference: " << truncate(x) - truncate(buffer) << 
	std::endl;
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
*/
```

# Babylon Method
1. **Make an initial guess.** Guess any positive number $x_0$.
2. **Improve the guess.** Apply the formula $$x_1 = (x_0 + S / x_0) / 2$$ . The number $x_1$ is a better approximation to $\sqrt{S}$.
3. **Iterate until convergence.** Apply the formula $$x_{n+1} = (x_n + s / x_n) / 2$$ until the process converges. Convergence is achieved when the digits of $x_{n+1}$ and $x_n$ agree to as many decimal places as you desire.

I achieved this using a while loop with a `buffer` for $x_n$ and a main `x` for $x_{n+1}$. I then looped until a truncated `buffer`, to `ACCURACY` decimal places, and `x` are the same. This is then returned.