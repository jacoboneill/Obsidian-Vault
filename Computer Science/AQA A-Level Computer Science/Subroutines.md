---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
---
# Subroutine
A subroutine is a self contained block of code and carries out one or more related processes.
Subroutines have unique ID's that can be called later in the program

C++ and other OOP (object oriented programming) languages enforce the use of subroutines.

e.g.
```cpp
#include <iostream>

void mainMenu(){
	std::string opt;
	std::cin >> opt;
	
	if(opt == "Add"){
		addRecord();
	}
	if(opt == "Ammend"){
		ammendRecord();
	}
	if (opt == "Delete"){
		deleteRecord();
	}
}

void addRecord(){
	// Code to add a new record
}

void ammendRecord(){
	// Code to locate and ammend a record
}

void deleteRecord(){
	// Code to delete an existing record
}

int main(int argc, char* argv[]){
	mainMenu();
	
	return 0;
}
```

# Benefits
- Subroutines can be called at any time using their unique ID.
- Allow an overview of the program
- Use a top-down approach to develop the whole project
- Easier to debug as each subroutine is self-contained
- Very large projects can be developed by more than one developer.