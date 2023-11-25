---
tags:
  - Cherno
  - CPP
  - Note
link: https://www.youtube.com/watch?v=DTxHyVn0ODg&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=16
---
# Pointers
>[!definition]
> An integer that stores a memory address.


## Void Pointer
The typing on a pointer is just syntax. All pointers are the same, therefore you can have a `void*` and it will store a memory address.

Using a void pointer means that the compiler won't care about the type, using a type is just for syntax and making development easier.

A blank pointer can be one of the following:
```cpp
#include <iostream>

int main(){
	void* a_ptr = 0;
	void* b_ptr = NULL;
	void* c_ptr = nullptr;
	
	void* void_ptr = nullptr;
	int* int_ptr = nullptr;
	
	std::cout << (void_ptr == int_ptr) << std::endl; //void* == int*
	
}

// OUTPUT: 1
```

## Referencing a Variable's Memory Address
You can use the `&` operator before an initialised variable and set it as the value of the pointer to set the pointer to the memory address of the variable.
```cpp
int main(){
	int value = 8;
	void* value_ptr = &value;
}
```

## Dereferencing a Pointer
Dereferencing a pointer means to read or write to the data at the memory address. You can do this by prepending a `*` before the pointer variable name.

Using a type, means that the compiler knows how many bytes of data to read from or write to the memory address, however, the value of a `void*` and `int*` are still the memory address.
```cpp
#include <iostream>

int main(){
	int value = 8;
	int* value_ptr = &value;
	
	*value_ptr = 10; //Set value to 10
	
	std::cout <<
		"value: " << value << '\n' <<
		"value pointer: " << *value_ptr << '\n' <<
		"value pointer address: " << value_ptr <<
	std::endl;
}

/*
 * OUTPUT:
 *   value: 10
 *   value pointer: 10
 *   value pointer address: 0x7ff7b2e8e37c
 */
```

## Heap v.s. Stack
Previously we have been making pointers on the stack. However we can also make them on the heap (See: [[Stack vs Heap Memory in C++]]).
```cpp
#include <string>

int main(){
	char* buffer = new char[8]; // Using char as it is 1 byte long
	
	std::memset(buffer, 0, 8); // Setting 8 bytes of '0' at buffer's location
	
	delete[] buffer; // Deleting the memory at buffer
}
```

## Double Pointers
> [!definition]
> A pointer to a pointer

```cpp
#include <iostream>

int main(){
	char* buffer = new char[8];
	std::memset(buffer, 0, 8);
	
	char** buffer_ptr = &buffer;
	
	delete[] buffer;
	
	std::cout <<
	    "buffer_ptr = " << buffer_ptr << '\n' <<
	    "buffer address = " << &buffer << '\n' <<
	    "buffer = " << "0x00" << // 8 bits of 0's
	std::endl;
}

/*
 * OUTPUT:
 *   buffer_ptr = 0x7ff7b32e2370
 *   buffer address = 0x7ff7b32e2370
 *   buffer = 0x00
 */
```