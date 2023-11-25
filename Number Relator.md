---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
# Prompt
Write code for an app that allows the user to input two numbers then carry out each of the relational operators returning an output of `TRUE` or `FALSE`.

# number_relator.cpp
```cpp
#include <iostream>
#include <vector>

int prompt(int index){
	int number = 0;
	
	while(true){
		std::cout << "Please enter number " << index << ": ";
		std::string input;
		std::cin >> input;
		
		int number_count = 0;
		for(char c : input){
			if(std::isdigit(c)){
				number_count++;
			}
		}
		
		if(number_count == input.size()){
			return std::stoi(input);
		} else {
			std::cerr << "Error, " << input << " is not a number." << std::endl;
		}
	}
}

std::string output(std::string symbol, std::vector<int> numbers){
	std::string output = 
		std::to_string(numbers[0]) + ' ' + 
		symbol + ' ' +  
		std::to_string(numbers[1]) + " = ";
	
	return output;
}

std::string btos(bool arg){
	return arg ? "True" : "False";
}

int main(int argc, char* argv[]){
	std::vector<int> numbers;
	numbers.push_back(prompt(1));
	numbers.push_back(prompt(2));
	
	std::cout <<
		output("==", numbers) << btos(numbers[0] == numbers[1]) << std::endl <<
		output("!=", numbers) << btos(numbers[0] != numbers[1]) << std::endl <<
		output(">", numbers) << btos(numbers[0] > numbers[1]) << std::endl <<
		output(">=", numbers) << btos(numbers[0] >= numbers[1]) << std::endl <<
		output("<", numbers) << btos(numbers[0] < numbers[1]) << std::endl <<
		output("<=", numbers) << btos(numbers[0] <= numbers[1]) <<
	std::endl; 
	
	return 0;
}
```