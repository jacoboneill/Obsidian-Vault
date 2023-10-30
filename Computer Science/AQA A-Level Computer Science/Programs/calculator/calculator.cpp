#include <iostream>

int add(int arg_count, int args[]){
  int result = 0;

  for(int i = 0; i < arg_count; i++){
    result += args[i];
  }

  return result;
}

int subtract(int arg_count, int args[]){
  int result = 0;

  for(int i = 0; i < arg_count; i++){
    result -= args[i];
  }

  return result;
}

int multiply(int arg_count, int args[]){
  int result = 1;

  for(int i = 0; i < arg_count; i++){
    result *= args[i];
  }

  return result;
}

int divide(int arg_count, int args[]){
  int result = 1;

  for (int i = 0; i < arg_count; i++) {
    result /= args[i];
  }

  return result;
}


int main(int argc, char* argv[]){
  int arg_count = 2;
  int args[arg_count];

  for(int i = 0; i < arg_count; i ++){
	  std::string i_label;
	
	  switch (i) {
	    case 0:
	      i_label = "1st";
	      break;
	
	    case 1:
	      i_label = "2nd";
	      break;
	
	    default:
	      i_label = std::to_string(i) + "th";
	      break;
	  }
	
	  std::cout << "Please enter the " << i_label << " number: "; 
	  
	  std::string raw;
	  std::cin >> raw;
	  args[i] = std::stoi(raw);
  }

  std::cout << 
    "add: " << add(arg_count, args) << std::endl <<
    "subtract: " << subtract(arg_count, args) << std::endl <<
    "multiply: " << multiply(arg_count, args) << std::endl <<
    "divide: " << divide(arg_count, args) << 
  std::endl;
  
  return 0;
}
