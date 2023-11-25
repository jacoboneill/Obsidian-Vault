---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 52
---
# Design Principles
There are three key design principles that are recognised as producing the most elegant solution when programming using an object-oriented language.

## Encapsulate What Varies
Encapsulating what varies means to group together things that might change in the future into a class. This might be, for example, the state of whether or not a customer at a library can or cannot checkout a book:
```cpp
class Customer{
	// include Customer logic here
};

struct Book{
	// include Book logic here
};

// ❌ BAD! The checkout logic will need to be changed here with no easy way of finding.
Customer::checkoutBook(Customer* customer, Book* book){
	if(
		customer &&
		customer.fine <= 0 &&
		customer.card &&
		customer.card.expiration > 0 &&
		book &&
		!book.isCheckedOut
	) {
		customer.books.push_back(book);
		book.isCheckedOut = true;
	}
}

// ✅ GOOD!, the checkout logic is encapsulated and can be easily changed in the class.
Customer::checkoutBook(Customer* customer, Book* book){
	if(customer.canCheckout(book)){
		customer.checkout(book);
	}
}
```

## Favour Composition Over Inheritance
[[Aggregation#Composition Aggregation|Composition]] over [[Inheritance|inheritance]] means to use simple objects inside of container objects rather than using inheritance. This is mainly because if you use inheritance you have to keep looking between classes to know all the methods and properties of the class;
```cpp
// ❌ BAD! You will have to keep looking between Engine and Car
class Engine{
	// include Engine logic here.
};

class Car : public Engine{
	// include Car logic here, it has the methods and properties
	// from the engine. 
};

// ✅ GOOD! You compose the car to have an engine. This makes the code more organised
class Engine{
	// include Engine logic here.
};

class Car{
	Engine engine;
	// include Car logic here, reference the engine using engine.
};
```

## Program to Interfaces, Not Implementation
Programming to an interface (an [[Abstract, Virtual, and Static Methods#Abstract Method|abstract]] class) is preferable compared to implementing the same code over and over. This is because if you add a new class with a similar implementation, you then have to create a new class that was used on the old ones.
```cpp
#include <iostream>

// ❌ BAD! So much duplicate code
class Circle{
	public:
		void draw(){
			std::cout << "○" << std::endl;
		}
		
		std::string name = "Cirlce"
};

class Square{
	public::
		void draw(){
			std::cout << "□" << std::endl;
		}
		
		std::string name = "Square";
};

void drawShape(Circle circle){
	std::cout << circle.name << ": ";
	circle.draw();
}

void drawShape(Square square){
	std::cout << square.name << ": ";
	square.draw();
}

// ✅ GOOD! You reduce the number of functions.
class Shape{
	public:
		virtual void draw() = 0;
};

class Circle : public Shape{
	public:
		void draw() override{
			std::cout << "○" << std::endl;
		}
		
		std::string name = "Circle";
};

class Square : public Shape{
	public:
		void draw() override{
			std::cout << "□" << std::endl;
		}
		
		std::string name = "Square";
};

void drawShape(Shape shape){
	std::cout << shape.name << ": ";
	shape.draw();
}
```