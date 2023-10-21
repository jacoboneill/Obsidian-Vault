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

## Substring
