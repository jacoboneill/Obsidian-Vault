---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 50
---
# Instantiation
> [!definition]
> The process of creating an object from a class

## Constructor
>[!definition]
>A Constructor is a method in a class that is called when a class is instantiated

```cpp
#include <iostream>

class Quad{
	public:
		Quad(int a, int b) :
			m_a(a),
			m_b(b),
			m_area(a * b)
			{
				std::cout << 
					"This was called when I was instantiated!" << 
				std::endl;
			}
		
		int getArea(){
			return m_area;
		}
	
	private:
		int m_a;
		int m_b;
		int m_area;
};

int main(){
	Quad rect1(2, 4);
	std::cout << rect1.getArea() << std::endl;
	
	return 0;
}

/*
 * OUTPUT:
 *   This was called when I was instantiated!
 *   8
 */
```

The constructor is the
```cpp
Quad(int a, int b) :
	m_a(a),
	m_b(b),
	m_area(a * b)
	{
		std::cout <<
			"This was called when I was instantiated!" <<
		std::endl;
	}
```

This block of code has parts to it, the *Member Initialiser List* and a *Constructor Function*. The *Member Initialiser List* isn't necessary, and can be replicated using a *Constructor Function*, however it is a nice short hand.

> [!tip]
> Constructor Functions can be overloaded using different parameters!

### Member Initialiser List
The member initialiser list uses the syntax of a `:` followed by a comma separated list of *member properties* (typically private), with the data value on the inside. This can be a parameter of the constructor or a calculation like in the `m_area` property. This is then followed by a *Constructor Function*.

### Constructor Function
A constructor function needs to be part of the constructor, and is called when an object is initialised, working as a `void` function.

This therefore means that the *Member Initialiser List* can be not used, and a *Constructor Function* assigning the member properties can also work. The syntax is the same as any other `void` function:
```cpp
Quad(int a, int b){
	// Member Initialisation
	m_a = a;
	m_b = b;
	m_area = a * b;
	
	std::cout <<
		"This was called when I was instantiated!" <<
	std::endl;
}
```