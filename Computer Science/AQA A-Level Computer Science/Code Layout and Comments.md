---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 41
---
# Code Layout and Comments
Using the programming languages features can help to make the code more readable. This can include:
- Commenting on code that might not make sense just looking at it.
- Indentation for Loops

## Example
***BAD!***
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int W[12];
	for(int i = 0; i <= 12; i++){
		W[i] = 2 * i;
	}

	for(int i = 0; i <= 12; i++){
		if(i != 0){
			std::cout << ", ";
		}
		std::cout << W[i];
	}
	
	return 0
}
```

***GOOD!***
```cpp
/*
 *  A program that will add the first 12 multiples of 2 in an array.
 */

#include <iostream>

int main(int argc, char* argv[]){
	int twoTimesTable[12]; // initalise array
	
	// Add values into array
	for(int i = 0; i <= 12; i++){
		twoTimesTable[i] = 2 * i;
	}
	
	// Print values to console
	for(int i = 0; i <= 12; i++){
		if(i != 0){
			std::cout << ", "; // Don't print comma on first value
		}
		
		std::cout << twoTimesTable[i];
	}
	
	return 0;
}
```

Helpful features:
- Description of the program at the top
- Comments on lines that may not make sense at a glance
- Sensible variable names such as `twoTimesTable` and `i` (`i` is an industry standard for index)
- The loops and if statements have been indented appropriately.