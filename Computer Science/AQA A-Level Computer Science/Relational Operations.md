# Relational Operations
Relational operations work by comparing between two data items. The data items are called the *operands* and the sign is the *operator*.
Most programming languages use the following operators

| Operator | Description              |
|----------|--------------------------|
| = or ==  | Equal to                 |
|<> or !=  | Not equal to             |
| <        | Less than                |
| >        | Greater than             |
| <=       | Less than or equal to    |
| >=       | Greater than or equal to |

These relational operations are used to group object comparisons instead of writing a case for every number.
For example
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	for(int n : numbers){
		if(n > 5){
			std::cout << n;
		}
	}
	
	std::cout << std::endl; // OUTPUT: 678
	
	return 0;
}
```

instead of:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	for(int n : numbers){
		if(n == 6){
			std::cout << n;
		}
		if(n == 7){
			std::cout << n;
		}
		if(n == 8){
			std::cout << n;
		}
	}
	
	std::cout << std::endl; // OUTPUT: 678
	
	return 0;
}
```
