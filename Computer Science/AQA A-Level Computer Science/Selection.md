# Selection
Selection refers to the comparison of values.

A simple example in C++ would be:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int age;
	std::cout << "Age: ";
	std::cin >> age;
	std::cout << std::endl;
	
	if(age < 17){
		std::cout << "Not old enough to drive" << std::endl;
	} else {
		std::cout << "Old enough to drive" << std::endl;
	}
	
	return 0;
}
```

The selection is the `if-else` statement that compares the value of `age` with the constant integer `17`.

# Nested Selection
Nested selection refers to selections with multiple comparisons, rather than just the two.

Some examples in C++ would be:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int weight;
	std::cout << "Weight: ";
	std::cin >> weight;
	std::cout << std::endl;
	
	std::cout << "Price: £";
	if(weight >= 2000){
		std::cout << "10";
	} else if(weight >= 1500){
		std::cout << "7.50";
	} else if(weight >= 1000){
		std::cout << "5";
	} else {
		std::cout << "2.50";
	}
	
	
	std::cout << std::endl;
	
	return 0;
}
```

Constructs in C++ exist for cases like this called `switch` statements. As long as the cases in the switch statements are integral. For example:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int opt;
	std::cout << "Choose Option (1-3): ";
	std::cin >> opt;
	std::cout << std::endl;
	
	switch(opt){
		case 1:
			std::cout << "You chose opetion 1!";
			break;
		
		case 2:
			std::cout << "You chose option 2!";
			break;
		
		case 3:
			std::cout << "You chose option 3!";
			break;
		
		/*
			Default is the equivelant of else at the end of an if-else-if
			statement.
		*/
		default:
			std::cout << "Invalid option";
			break;
	}
	
	std::cout << std::endl;
	
	return 0;
}
```