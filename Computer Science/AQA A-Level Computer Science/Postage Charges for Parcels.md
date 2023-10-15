```cpp
/*
  Postage Costs based off of Royal Mail 2023.
*/

#include <iostream>

int main(int argc, char* argv[]){
	// Check class
	std::cout << "Please select from the following:" << '\n' <<
		"( 1 ) 1st Class" << '\n' <<
		"( 2 ) 2nd Class" << '\n' <<
		"( 3 ) Tracked 24" << '\n' <<
		"( 4 ) Tracked 48" << std::endl;
	
	std::string class_in;
	std::cin >> class_in;
	int class_ = std::stoi(class_in);
	std::cout << "Please enter weight in kilograms: ";
	
	std::string weight_in;
	std::cin >> weight_in;
	int weight = std::stoi(weight_in);
	
	
	if(weight > 2){
		switch (class_){
			case 1:
				std::cout << "Price: £";
				if(weight >= 20){
					std::cout << "10.99";
				} else if (weight >= 10){
					std::cout << "6.99";
				} else if (weight >= 2){
					std::cout << "5.29";
				}
				break;
			
			case 2:
				std::cout << "Price: £";
				if(weight >= 20){
					std::cout << "9.49";
				} else if (weight >= 10){
					std::cout << "5.99";
				} else if (weight >= 2){
					std::cout << "4.49";
				}
				break;
			
			case 3:
				std::cout << "Price: £";
				if(weight >= 20){
					std::cout << "11.49";
				} else if (weight >= 10){
					std::cout << "7.49";
				} else if (weight >= 2){
					std::cout << "5.79";
				}
				break;
		      
			case 4:
				std::cout << "Price: £";
				if(weight >= 20){
					std::cout << "9.99";
				} else if (weight >= 10){
					std::cout << "6.49";
				} else if (weight >= 2){
					std::cout << "4.99";
				}
				break;
			
			default:
				std::cerr << "Error, option not available";
				return 1;
				break;
		}
	} else {
		std::cout << "Parcel too small.";
	}
	std::cout << std::endl;
	return 0;
}
```