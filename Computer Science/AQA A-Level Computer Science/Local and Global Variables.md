---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 34
---
# Local Variable
A local variable is a variable in the local scope. This means that it is inside a subroutine or function, and is only accessible from it's subroutine or function.
This is typically best practice because:
- You cannot accidentally change the value of a variable somewhere else in the program. Therefore making the likelihood of bugs lower.
- You can use the same name for variables in different situations, and each would be a separate variable.
- You free up memory every time the variable goes out of scope. 
# Global Variable
A global variable is a variable that can be accessed from anywhere inside the program. For example, a password for an API would be useful to be global as it would mean any function can use the API.

# Example
```cpp
#include <iostream>

int ONE = 1; // Global variable

int onePlusTwo(){
	int two = 2; // Local Variable
	
	return ONE + two;
}

int main(int argc, char* argv[]){
	std::cout <<
		ONE << ", " <<
		onePlusTwo() << 
	std::endl;
	
	return 0;
}

// OUTPUT: 1, 3
```

`ONE` is a global variable, therefore can be accessed in both functions `main` and `onePlusTwo`. `two` is a local variable to the `onePlusTwo` function and therefore can't be accessed by `main`.
