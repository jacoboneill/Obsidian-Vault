---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 26
---
# String Handling Functions
A string is a sequence of characters. There will be many times you will need to manipulate strings to get a desired output. For example:
- Searching for strings of characters
- Combining strings together

In C++, there are multiple ways of instantiating strings:
```cpp
#include <string>

int main(int argc, char* argv[]){
	char string1[] = "Hello";
	std::string string2 = "World";
	
	return 0;
}
```
## Length
The length of a string is used to check what the size of a string is. For example, `Hello, World` has a length of `12`.

In C++ you can do this by doing the following:
```cpp
#include <iostream>
#include <string>

int main(int argc, char* argv[]){
	char string1[] = "Hello";
	std::string string2 = "World";

	string1_size = sizeof(string1) / sizeof(string1[0]);
	string2_size = string2.size();
	
	std::cout <<
	"string1 length: " << string1_size << ", " << 
	"string2 length: " << string2_size << 
	std::endl;
	
	return 0;
}

// OUTPUT: string1 length: 6, string2 length: 5
```

`string1`'s length is calculated by taking the memory size of the entire array and dividing it by the memory size of the first character.
`string2` has an abstracted method `std::string::size` that gives the same result.

In Python, you can do the following:
```python
x = "Hello World"
print(len(x))

# OUTPUT: 11
```

## Position
You can find the starting position of a character or string within a string. This can be useful if you need to remove data from the string, or extract data from a string.

In C++ you can do this by doing the following:
```cpp
#include <iostream>
#include <string>

int findIndexClassic(char string1[], char string1_target[]){
	int position = strstr(string1, string1_target) - string1;
	
	if(position >= 0){
		return position;
	} else {
		return -1;
	}
}

int findIndexNew(std::string string2, std::string string2_target){
	size_t position = string2.find(string2_target);
	
	if(position != std::string::npos){
		return position;
	} else {
		return -1;
	}
}

int main(int argc, char* argv[]){
	char string1[] = "The quick brown fox jumps over the lazy dog";
	std::string string2 = "Sphinx of black quartz, judge my vow";
	
	char string1_target[] = "fox";
	std::string string2_target = "judge";
	
	int string1_pos = findIndexClassic(string1, string1_target);
	size_t string2_pos = findIndexNew(string2, string2_target);
	
	std::cout << "string1 target: " << string1_target;
	if(string1_pos != -1){
		std::cout << " at " << string1_pos;
	} else {
		std::cout << " Not Found";
	}
	std::cout << std::endl;
	
	std::cout << "string2 target: " << string2_target;
	if(string2_pos != -1){
		std::cout << " at " << string2_pos;
	} else {
		std::cout << " Not Found";
	}
	std::cout << std::endl;
	
	return 0;
}

/*
OUTPUT:
string1 target: fox at 16
string2 target: judge at 24
*/
```

`findIndexClassic` finds the relative offset of the memory addresses of the substring and the string to find the index of the substring. Here is how it works with a found and not found case:
```cpp
#include <iostream>

const char* stringFound(int pos){
	return (pos >= 0) ? "True" : "False";
}

int findIndexClassic(char string[], char string_target[]){
	char* p_string = string; // 0xF0
	char* p_substring = strstr(string, string_target); // 0xFC
	
	char* p_substring_not_found = strstr(string, ";oiashjfdk;ajns"); // NULL
	
	int position = p_substring - p_string; // 0xFC - 0xF0 = 0xC = 12
	int position_not_found = p_substring_not_found - p_string; // NULL - 0xF0 < 0
	
	std::cout << stringFound(position) << ' '; // True
	std::cout << stringFound(position_not_found) << ' '; // False
	
	return position;
}

int main(int argc, char* argv[]){
	char string[] = "Hello World";
	int pos = findIndexClassic(string, "World");
	std::cout << pos << std::endl;
	
	return 0;
}

// OUTPUT: True False 6
```

`findIndexNew` uses the `std::string::find` method. This returns a `size_t` number (a number that is always bigger than zero). It then has a check with `std::string::npos` which is an int constant that is the biggest index it could be. By checking this, you can tell if the string has the substring inside. Here is how it works with a found and not found case:
```cpp
#include <iostream>
#include <string>

std::string stringFound(size_t pos){
	return (pos != std::string::npos) ? "True" : "False";
}

int findIndexNew(std::string string, std::string string_target){
	size_t position = string.find(string_target); // 12
	size_t position_not_found = string.find(";oiashjfdk;ajns"); // 4294967295
	
	std::cout << stringFound(position) << ' '; // True
	std::cout << stringFound(position_not_found) << ' '; // False
	
	return position;
}

int main(int argc, char* argv[]){
	std::string string = "Hello World";
	int pos = findIndexNew(string, "World");
	std::cout << pos << std::endl;
	
	return 0;
}

// OUTPUT: True False 6
```

In Python, you can do the following:
```python
string = "The quick brown fox jumped over the lazy dog"
target = "brown"

print(string.find(target))

# OUTPUT: 10
```

## Substring
A substring is a string inside a string. Programming languages typically let you select a substring with the start index and length.
For example the substring *"Hello"* in *"Hello World"* would be from index `0` and have a length of `5`.

In C++, using classic C strings, you can do this by doing the following:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	char string[] = "Hello World";
	
	int index_start = 0;
	int substring_length = 5;
	
	char substring[substring_length];
	
	strncpy(substring, string + index_start, substring_length);
	substring[substring_length] = '\0'; // Terminate string with null-terminate
	
	std::cout <<
	"Original: " << string << " | Substring: " << substring << 
	std::endl;
	
	return 0;
}

// OUTPUT: Original: Hello World | Substring: Hello
```

Using `std::string`, you can do this by doing the following:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::string string = "Hello World";
	
	int start_index = 0;
	int substring_length = 5;
	
	std::string substring = string.substr(index_start, substring_length);
	
	std::cout <<
	"Original: " << string << " | Substring: " << substring <<
	std::endl;
	
	return 0;
}

// OUTPUT: Original: Hello World | Substring: Hello
```

In Python, a substring can be made by using the *start* and *end* indices
```python
string = "The quick brown fox jumped over the lazy dog"
substring = string[4:9]

print(substring)

# OUTPUT: quick
```
## Concatenation
Concatenation is the process of appending one string to another.

In C++, using classic C strings, this can be done by doing the following:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	char string1[] = "Hello ";
	char string2[] = "World";
	int total_length = 11;
	
	char concat[total_length];
	
	// Copy string1 to concat. concat = "Hello "
	strcpy(concat, string1);
	
	// Concatenate string2 to concat. concat = "Hello World"
	strcat(concat, string2);
	
	std::cout << concat << std::endl;
	
	return 0;
}

// OUTPUT: Hello World
```

Using `std::string` this can be done by doing the following:
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::string string1 = "Hello ";
	std::string string2 = "World";
	
	std::string concat = string1 + string2;
	
	std::cout << concat << std::endl;
	
	return 0;
}
```

In Python, you can do the following:
```python
string1 = "Hello"
string2 = " World"

concat1 = string1 + string2
print(concat)

# OUTPUT: Hello World
```
## Character Codes
All characters use either Unicode or ASCII. These encodings are used so computers can translate the binary data into characters on a screen.
ASCII is a subset of the Unicode encoding. ASCII contains mainly only latin characters, while Unicode includes accented letters, Cyrillic, Greek, Arabic, Hebrew, Chinese, and Japanese characters, as well as emojis.
For example: "*a*" is `0x61` in ASCII and Unicode.

Some websites that have lookup tables for ASCII and Unicode include:
- [ASCII](https://www.lookuptables.com/text/ascii-table)
- [Unicode](https://www.lookuptables.com/text/unicode-characters) 

## String → Integer and Integer → String
String to integer conversions and vice versa are common in programming languages.

C++ does this by using the  `std::stoi` for `std::string` → `int`, `atoi` for `char[]` → `int`, and `std::to_string` for `int` → `std::string`.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::string string1 = "1";
	char string2[] = "2";
	int number1 = 3;
	
	// String to integer conversion
	int string1_int = std::stoi(string1);
	int string2_int = atoi(string2);
	
	// Integer to string conversion
	std::string number1_string = std::to_string(number1);
	
	std::cout << 
	"std::string -> int: " << string1_int << std::endl <<
	"char[] -> int " << string2_int << std::endl <<
	"int -> std::string " << number1_string << 
	std::endl;
	
	return 0;
}

/*
OUTPUT:
std::string -> int: 1
char[] -> int 2
int -> std::string 3
*/
```

> Integer to classic C style arrays `char[]` are really difficult due to memory allocation.

In Python you can do the following, with type checking:
```python
string = "123"

if string.isdigit():
	number = int(string)
else:
	number = -1

print(number)

# OUTPUT 123
```

## String → Double and Double → String
C++ handles string to double conversions and vice versa using the `std::string` library with use of the `std::stod()` method for `std::string` → `double`, and `std::to_string()` for `double` → `std::string`.
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::string pi_s = "3.1415926";
	
	double pi_d = std::stod(pi_s);
	float pi_f = std::stof(pi_s);
	long double pi_ld = std::stold(pi_s);
	
	std::string pi_ds = std::to_string(pi_d);
	
	std::cout <<
	"String: " << pi_s << std::endl <<
	"Double: " << pi_d << std::endl <<
	"Float: " << pi_f << std::endl <<
	"Long Double: " << pi_ld << std::endl <<
	"Back to String: " << pi_ds <<
	std::endl;
}

/*
OUTPUT:
String: 3.1415926
Double: 3.14159
Float: 3.14159
Long Double: 3.14159
Back to String: 3.141593
*/
```

In Python you can do the following:
```python
string = "3.141"

# Remove decimal and check if digit
if string.replace(".", "").isdigit():
	number = float(string)
else:
	number = -1

print(number)

# OUTPUT: 3.141
```