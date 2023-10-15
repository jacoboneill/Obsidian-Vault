# Test Grades:
```csv
Alice,115
Bob,142
Charlie,178
David,123
Eve,158
Frank,131
Grace,104
Hank,196
Ivy,121
Jack,137
```
# Code
```cpp
#include <fstream>
#include <iostream>
#include <map>

const int MAXIMUM_MARK = 200;

class Record {
	public:
		Record() : name(""), mark(0), grade(0.0) {}
		
		Record(std::string _name, std::string _mark)
			: name(_name), mark(std::stoi(_mark)) {
				grade = (static_cast<double>(mark) / MAXIMUM_MARK) * 100;
			}
		
		std::string name;
		int mark;
		double grade;
};

int main(int argc, char* argv[]) {
	// Create an instance of the test grade file
	std::ifstream test_grades;
	test_grades.open("./test_grades.csv");
	
	// Check to see if the file is open. If so exit with error
	if (!test_grades.is_open()) {
		std::cerr << "Failed to open file" << std::endl;
		return 1;
	}
	
	// Read and process the file line by line into a map
	
	std::map<std::string, Record> grades;
	std::string line;
	while (std::getline(test_grades, line)) {
		// Find index of character between name and grade
		char delimiter = ',';
		int index = line.find(delimiter);
		std::string name = line.substr(0, index);
		std::string mark = line.substr(index + 1);
		
		// Store in Map.
		grades.insert(std::make_pair(name, Record(name, mark)));
		
		// Print to screen
		Record current = grades[name];
		std::cout << 
			"NAME: " << current.name << '\n' << 
			"MARK: " << current.mark << '\n'<< 
			"GRADE: " << current.grade << '\n' << std::endl;
	}
}
```