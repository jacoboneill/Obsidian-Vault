---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
---
# DRY
> Don't Repeat Yourself

DRY code means to not repeat yourself, meaning use functions if you find yourself repeating yourself. e.g.

***BAD!***
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	std::cout <<
		"1 + 1 = " << 1 + 1 << std::endl <<
		"2 + 1 = " << 2 + 1 << std::endl <<
		"3 + 1 = " << 3 + 1 << std::endl <<
		"4 + 1 = " << 4 + 1 << std::endl <<
		"5 + 1 = " << 5 + 1 << std::endl;
	
	return 0;
}

/*
	OUTPUT:
		1 + 1 = 2
		1 + 2 = 3
		1 + 3 = 4
		1 + 4 = 5
		1 + 5 = 6
		
*/
```

***GOOD!***
```cpp
#include <iostream>

std::string addOne(int a){ 
	return + "1 + " + std::to_string(a) + " = " + 
	std::to_string(1+a) + '\n';
}

int main(int argc, char* argv[]){
	std::cout <<
		addOne(1) << addOne(2) << addOne(3) << addOne(4) << addOne(5);
	
	return 0;
}

/*
	OUTPUT:
		1 + 1 = 2
		1 + 2 = 3
		1 + 3 = 4
		1 + 4 = 5
		1 + 5 = 6
*/
```

# KISS
> Keep It Simple Stupid

Make sure you don't over engineer a problem until the code is unreadable. There are many ways to solve a problem, the simplest is normally the best as computers don't need to be 100% optimised now, but programming needs to be understandable by everyone

***BAD!***
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double a_real = 3, a_imag = 2;
	double b_real = 1, b_imag = 4;
	
	double c_real = a_real + b_real;
	double c_imag = a_image + b_imag
	
	std::cout << c_real << " + " << c_imag << 'i' << std::endl;
	return 0;
}

// OUTPUT: 4 + 6i
```

***GOOD!***
```cpp
#include <iostream>

int main(int argc, char* argv[]){
	double real = 3 + 2;
	double imag = 1 + 4;
	
	std::cout << real << " + " << imag << 'i' << std::endl;
	return 0;
}

// OUTPUT: 4 + 6i
```
# YAGNI
> You Aren't Gonna Need It

Delete what is not needed. Only introduce features when necessary, not just because you want to.

***BAD!***
```cpp
#include <iostream>
#include <vector>

class ShoppingCart {
	public:
		void addProduct(std::string product){
			_cart.push_back(product);
		}
		
		void removeProduct(){
			_cart.pop_back();
		};
		
		void checkout(){
			std::cout << "Checkout: " << std::endl;
			for(std::string product : _cart){
				std::cout << "- " << product << std::endl;
			}
		}
	
	private:
		std::vector<std::string> _cart;
};

int main(int argc, char* argv[]){
	ShoppingCart cart;
	cart.addProduct("Apple"); // cart = { Apple }
	cart.addProduct("Banana"); // cart = { Apple, Banana }
	cart.removeProduct(); // cart = { Apple }
	cart.checkout();
	
	return 0;
}

/*
	OUTPUT:
		Checkout:
		- Apple
*/
```

***GOOD!***
```cpp
#include <iostream>
#include <vector>

void printCart(std::vector<std::string> cart){
	std::cout << "Checkout: " << std::endl;
	for(std::string product : cart){
		std::cout << "- " << product << std::endl;
	}
}

int main(int argc, char* argv[]){
	std::vector<std::string> cart;
	cart.push_back("Apple");
	cart.push_back("Banana");
	cart.pop_back();
	printCart(cart);
	
	return 0;
}

/*
	OUTPUT:
		Checkout:
		- Apple
*/
```

Both have the same functionality, but there was no need to make a `class` for one instance for a simple application like this.