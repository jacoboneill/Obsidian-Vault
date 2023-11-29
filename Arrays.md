---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 60
---
# Arrays
>[!definition]
>A list or table of data that has a variable name that identifies the list or table. Each item in the table is called an *element*.

An array can have many dimensions, but most arrays are either:
- one dimensional for a list.
- two dimensional for a table or matrix.

Arrays are static data structures that are created by the programmer to store tables of data. In some programming languages, programmers need to define just how big an array is going to be at the start of their program. This therefore means it has a fixed memory size.

Here's how to do it in C++:
```cpp
#include <iostream>

int main(){
	// An empty int array with enough memory for ten int's.
	int empty_array[10];
	
	// An empty int array with enough memory for ten int's. It is initalised
	// with 0's instead of random values
	int empty_array_zero[10] = {};
	
	// An array with three integers already set
	int array[] = {1, 2, 3};
}
```

## One-Dimensional Array
A good example of a one-dimensional array:
```cpp
#include<iostream>

int main(){
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	std::string month_names[12] = {
		"Janurary",
		"Feburary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	
	// List all days out.
	for(int i = 0; i < 12; i++){
		std::cout << 
			month_names[i] << 
			" has " << 
			days_in_month[i] << 
			" days." << 
		std::endl;
	}
}
// OUTPUT:
	// Janurary has 31 days.
	// Feburary has 28 days.
	// March has 31 days.
	// April has 30 days.
	// May has 31 days.
	// June has 30 days.
	// July has 31 days.
	// August has 31 days.
	// September has 30 days.
	// October has 31 days.
	// November has 30 days.
	// December has 31 days.
```

| Element in days_in_month | Contents |
|:------------------------:|:--------:|
| 0 | 31 |
| 1 | 28 |
| 2 | 31 |
| 3 | 30 |
| 4 | 31 |
| 5 | 30 |
| 6 | 31 |
| 7 | 31 | 
| 8 | 30 | 
| 9 | 30 |
| 10 | 30 |
| 11 | 31 |

## Multi-Dimensional Array
A two dimensional array, works similar to a table, This could represent things such as a class of students' grade cards:
```cpp
#include <iostream>
int main(){
	int grades[3][3] = {
		{3, 1, 5},
		{4, 1, 2},
		{4, 1, 5}
	};
	
	// i < NUMBER OF ROWS
	for(int i = 0; i < 3; i++){
		// j < NUMBER OF COLUMNS
		std::cout << "ID: " << i << " GRADES: ";
		for(int j = 0; j < 4; j++){
			if(j != 1){
				std::cout << ", ";
			}
			std::cout << grades[i][j];
		}
		std::cout << std::endl;
	}
}

// OUTPUT:
	// ID: 0 GRADES: , 31, 5, 4
	// ID: 1 GRADES: , 41, 2, 4
	// ID: 2 GRADES: , 41, 5, 32759
```

This can be taken further with more dimensions. For example, maybe index one represents your Maths grade, but there was three papers. Making it a 3D array could mean you could store individual papers grades and compute the overall grade.

