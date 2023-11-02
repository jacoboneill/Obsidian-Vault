# Dry Runs and Trace Tables
Dry runs and trace tables are used in algorithm implementation to make sure the logic works. This is done by keeping track of the variables and making sure they do as they are meant to.

## Example

```cpp
#include <iostream>

void printArray(std::string names[], int size){
	for(int i = 0; i < size; i++){
		if(i != 0){
			std::cout << ", ";
		}
	
	std::cout << names[i];
	}
}

int main(int argc, char* argv[]){
	std::string names[] = {"Kevin", "Jane", "Beth", "Linda"};
	std::string buffer;
	
	for(int i = 0; i <= 3; i++){
		if(names[i] > names[i + 1]){
			buffer = names[i];
			names[i] = names[i + 1];
			names[i + 1] = buffer;
		}
	}
	
	printArray(names, 4);
}

// OUTPUT: Jane, Beth, Kevin, Linda
```

## Trace Table
| i | buffer | names[0] | names[1] | names[2] | names[3] |
|---|--------|----------|----------|----------|----------|
| | | Kevin | Jane | Beth | Linda |
| **0** | *Kevin* | Jane | Kevin | Beth | Linda |
| **1** | *Kevin* | Jane | Beth | Kevin | Linda |
| **2** | *Linda* | Jane | Beth | Kevin | Linda |

> This is the movement of the variables throughout the program. As you can see, it is the start of a sorting algorithm.
> If the program wasn't to follow this (using a debugger or `std::cout`ing) you would know there is a bug.
