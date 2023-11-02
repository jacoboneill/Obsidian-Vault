---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
---
# Iteration
Code that is iterative means code that loops. This is typically denoted by a loop start and end, with a condition to stop the loop.

There are two types of iteration - *Definite Iteration* and *Indefinite Iteration*.

## Definite Iteration
Definite iteration is a subcategory of iteration that means the iteration is asked to loop *x* amount of times.
In C++ a `for` loop is typically used to complete definite iteration:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	for(int i = 0; i < 10; i++){
		std::cout << i << ", ";
	}
	
	std::cout << std::endl;
	
	return 0;
}

//OUTPUT: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
```

## Indefinite Iteration
Indefinite iteration is another subcategory of iteration that means the iteration may never finish, and requires a condition to stop.
In C++, a `while` loop or `recurssion` is typically used to complete indefinite iteration:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int i = 0;
	while(i > 10){
		std::cout << i << ", ";
		i++;
	}
	
	std::cout << std::endl;
	
	return 0;
}

// OUTPUT: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
```

You **must** be careful with indefinite iteration however as if the condition is never met then it will cause the program to crash. An example of this would be:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int i = 0;
	while (i > 10){
		std::cout << i << ", ";
	}
	
	std::cout << std::endl;
	
	return 0;
}
// OUTPUT: 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
```

As you can see `i` will never be bigger than `10`, therefore it will infinitely try to write `i` to the `std::cout` until the program crashes.

# Nested Iteration
In the same way that selection statements can be nested, so too can iteration statements.
For example in C++, a common way of outputting a 2D array into the console would be by doing nested iteration:
```cpp
#include <iostream>
const int X_MAX = 3;
const int Y_MAX = 3;

int main(int argc, char* argv[]){
	int two_dimensional_array[Y_MAX][X_MAX] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for(int i = 0; i < Y_MAX; i++){
		for(int j = 0; j < X_MAX; j++){
			std::cout << two_dimensional_array[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	return 0;
}

/*
	OUTPUT:
		1 2 3 
		4 5 6 
		7 8 9 
*/
```

