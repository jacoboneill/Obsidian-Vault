#include <iostream>

class Odometer {
	public:
		Odometer(int current_mileage) : _mileage(current_mileage) {}
		
		void display(){
			std::cout << "Mileage: " << _mileage << '\n' << "Increment? ";
			std::string raw_input;
			std::cin >> raw_input;
			update(raw_input);
		}
		
		void update(std::string raw_input){
			if(isDigit(raw_input)){
				increment(std::stoi(raw_input));
			} else if(isYes(raw_input)){
				increment();
			}
			
			std::cout << "\x1B[2J\x1B[H"; //Clear code in ANSII
			display();
		}
		
	private:
		int _mileage;
		
		void increment(){
			_mileage++;
		}
		
		void increment(int miles){
			_mileage += miles;
		}
		
		bool isYes(const std::string& raw_input){
			char yes_cases[] = {'y', 'Y'};
			if(raw_input.size() == 1){
				char input = raw_input[0];
				
				for(char c : yes_cases){
					if(input == c){
						return true;
					}
				}
			}
			
			return false;
		}
		
		bool isDigit(const std::string& raw_input){
			for(char c : raw_input){
				if(!std::isdigit(c)){
					return false;
				}
			}
			
			return true;
		}
};

int main(int argc, char* argv[]){
	int current_mileage = 10130; // INSERT STARTING MILEAGE HERE
	Odometer odometer(current_mileage);	
	odometer.display();
}