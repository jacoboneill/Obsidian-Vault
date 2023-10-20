# Data Type
A data type determines what sort of data is being stored and how it will be handled by the program.

# Data Types
## Integer
An integer is a mathematical expression for a negative or positive number with no decimal places. A *"Whole Number"*

In C++, an integer takes 32 bits (4 bytes) of space.
If it is a signed integer (positive and negative) the MSB would be the sign, using [[Two's Complement]].
If it is an unsigned int then it will use all 32 bits (4 bytes).

|  | Signed | Unsigned |
|---|---|---|
| Formula | $-2^{31} - 1$ | $2^{32} - 1$ |
| Value | $-2147483649$ | $2147483647$ |

## Float
A float is a mathematical expression for a value with a decimal part. Every number that can be represented by two integers in a fraction are floats.

In C++, a float is called a *"double"*. It uses 64 bits (8 bytes), however the precision is from $2.22507 * 10^-308$ to $1.79769 * 10^308.$

## Character
A character is an individual symbol. This includes alphanumeric as well as symbols.

In C++, a character is typically 1 byte (8 bits) long.

## String
A string is a set of characters and is typically used for text.

In C++, the standard library has a string class, however classically a string was an array of characters. This would therefore mean the size was determined by how many characters were stored in the list.

``` cpp
char greeting[] = "Hello World";`
```
The greeting variable is made up of 12 characters (including a "\0" null pointer to terminate).
Knowing that each character takes up 8 bits (1 byte), we therefore will know that greetings total memory usage will be 96 bits (12 bytes).

## Boolean
A Boolean is a value that is either true or false. This is useful for flags, or any other data that can have two values.

## Date / Time
A date / time type would typically allow for date and time arithmetic. For example: `30.06.2020 + 1 = 31.06.2020` would work if it is a date type, however if it wasn't it may do something like: `30.06.2020 + 1 = 30.06.2021`.

## Pointer / Reference
A pointer / reference is a data type that stores the address in memory of another variable. For example:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	int x = 10; // 10 stored at address: 0x1F
	int* pX = &x; // pX is equal to the value at 0x1F, 10.
	
	std::cout << *pX << ", ";
	
	*pX = 99; // Change x through the pointer.
	std::cout << *pX << std::endl;;
	
	return 0;
}

// OUTPUT: 10, 99
```

Another way to look at it:

`pX = 00`

|Memory Address|00|01|10|11|
|-|-|-|-|-|
||x|y|add()|answer|

You could use `pX` to point to the value of x.

## Array
An array is a list of a singular data type. It count from 0.

In C++, an array has to be instantiated to give the memory size. For Example:
```cpp
int numbers_below_10[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
```

Because `numbers_below_10` has ten integers. The size of this would be $(10*4)= 40$ bytes or 320 bits.

## Object
An object is a set of key value pairs.

In C++, an object is typically referred to as a *Map*.
```cpp
#include <map>
#include <iostream>

int main(int argc, char argv[]){
	std::map<std::string, int> menu;
	
	menu["spaghetti bolognese"] = 4;
	menu["chocolate cake"] = 2;
	
	std::cout << menu["spaghetti bolognese"] << std::endl;
	
	return 0;
}

// OUTPUT: 4
```