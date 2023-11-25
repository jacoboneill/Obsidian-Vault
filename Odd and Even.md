---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
# odd_even.cpp
```cpp
#include <iostream>

std::string appendNumber(std::string string, int number){
	if(string.size() > 0){
		string += ", ";
	}
	
	string += std::to_string(number);
	
	return string;
}

int main(int argc, char* argv[]){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	std::string odd;
	std::string even;
	
	for(int n : numbers){
		if(n % 2 == 0){ // is even
			even = appendNumber(even, n);
		} else {
			odd = appendNumber(odd, n);
		}
	}
	
	std::cout <<
		"Odd: " << odd << std::endl <<
		"Even: " << even <<
	std::endl;
}
```

## Explanation
### std::string appendNumber(std::string string, int number)
```cpp
std::string appendNumber(std::string string, int number){
	if(string.size() > 0){
		string += ", ";
	}
	
	string += std::to_string(number);
	
	return string;
}
```
This function is used to handle the string manipulation to make sure that a comma is appended to make sure that it looks like a list when outputted

> This could've been done at the end if you used a `std::vector<int>` and then convert to a string at the end, but I wanted to avoid using the `std::vector` library.

It has to return the string and then be appended in the `int main()` function due to the scope of the `std::string string` parameter.

### int main(int argc, char* argv\[\])
```cpp
int main(int argc, char* argv[]){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	std::string odd;
	std::string even;
	
	for(int n : numbers){
		if(n % 2 == 0){ // is even
			even = appendNumber(even, n);
		} else {
			odd = appendNumber(odd, n);
		}
	}
	
	std::cout <<
		"Odd: " << odd << std::endl <<
		"Even: " << even <<
	std::endl;
}
```

The main function takes an initialised int array (using classic C style arrays), initalises an `odd` and `even` string to store the output, and then loops through the array using the C++11 *range based loop*. It checks if the number is odd by checking to see if there is a remainder if you divide by two by using the `modulo` operator. If it is, the corresponding string is reassigned by the return of the `appendNumber(std::string string, int number)` function.

After the loop, the strings are prepended with a label, and then printed to the console.