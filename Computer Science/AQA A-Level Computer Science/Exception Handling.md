---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
---
In this situation that a part of the code gets an error (i.e. a divide by zero error in a divide function), an error will be *thrown*.
The typical procedure of how exception handling works is:
- An error is thrown so the current subroutine stops
- The current state of the subroutine is saved
- the exception handling code is executed to take care of the error
- The normal subroutine can then be run again

i.e.
```cpp
#include <iostream>

float divide(float a, float b){
	try{
		if(b == 0){
			throw "Division by zero is not allowed";
		} else {
		  return a / b;
    }
	} catch(const char* errorMessage){
		std::cerr << errorMessage << std::endl;
    return 0;
	}
}

int main(int argc, char* argv[]){
	std::cout << 
		divide (1, 0) << ", " << // divide by zero error
		divide (1, 2) << // no error
	std::endl;
}

/*
	OUTPUT:
		Division by zero is not allowed
		0, 0.5
*/
```