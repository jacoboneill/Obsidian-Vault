---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
# substring.cpp
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::string string = "Hello, World";
	int start_index = 0;
	int length = 5;
	
	std::string substring = string.substr(start_index, length);
	
	std::cout << substring << std::endl;
	
	return 0;
}

// OUTPUT: Hello
```