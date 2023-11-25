---
tags:
  - AQA-A-Level
  - Computer-Science
  - Task
  - Program
---
# mean_median_range.cpp
```cpp
#include <iostream>

std::string printData(int numbers[], int size){
	std::string stringified_data;
	
	for(int i = 0; i < size; i++){
		if(stringified_data.size() > 0){
			stringified_data += ", ";
		}
		stringified_data += std::to_string(numbers[i]);
	}
	
	return stringified_data;
}

int range(int numbers[], int size){
	return numbers[size - 1] - numbers[0];
}

double mean(int numbers[], int size){
	double sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += numbers[i];
	}
	
	return sum / size;
}

double median(int numbers[], int size){
	// Assuming a sorted numbers[]
	double median = 0;
	
	if(size % 2 == 0){
		double mid_neg = static_cast<double>(numbers[(size - 2) / 2]);
		double mid_pos = static_cast<double>(numbers[((size - 2) / 2) + 1]);
		median = (mid_neg + mid_pos) / 2;
	} else {
		median = numbers[(size - 2) / 2];
	}
	
	return median;
}

int main(int argc, char* argv[]){
	int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(data) / sizeof(data[0]);
	std::cout << 
		"Data: " << printData(data, size) << std::endl <<
		"Range: " << range(data, size) << std::endl << // Expected outcome: 9
		"Mean: " << mean(data, size) << std::endl << // Expected outcome: 5.5
		"Median: " << median(data, size) << // Expected outcome: 5.5
	std::endl;
	
	return 0
}
```