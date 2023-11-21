---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
---
# Logical
```prolog
% Logical (declarative) approach
find_max([X], X).  % Base case: The maximum of a single element is that element.
find_max([H | T], Max) :- find_max(T, MaxT), (H >= MaxT -> Max = H; Max = MaxT).

numbers([12, 5, 27, 8, 17, 6]).
max_number(Max) :- numbers(Numbers), find_max(Numbers, Max).
```

# Procedural
```cpp
#include <iostream>
#include <vector>

int findMax(std::vector<int> numbers){
	int max = numbers[0];
	
	for(int n : numbers){
		if(n > max){
			max = n;
		}
	}
	
	return max;
}

int main(int argc, char* argv[]){
	std::vector<int> numbers = {12, 5, 27, 8, 17, 6};
	std::cout << findMax(numbers) << std::endl;
	
	return 0;
}
```