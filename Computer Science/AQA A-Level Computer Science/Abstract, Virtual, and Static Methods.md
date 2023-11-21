---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 51
---
# Static Methods
A static method is a method in which the method can be used without the instantiation of the object.
```cpp
#include <iostream>

class Dog{
	public:
		static void bark(){
			std::cout << "Woof!" << std::endl;
		}
};

int main(){
	Dog::bark();
}

// OUTPUT: Woof!
```

# Virtual Methods
A virtual method is a method in which the method is defined in the base class, but is assumed to be [[Polymorphism and Overriding|overridden]] in the subclass. This is especially useful when using [[pointers]] to objects:
```cpp
# include <iostream>

class Animal{
	public:
		virtual void makeNoise(){
			std::cout << "Generic Animal Noise" << std::endl;
		}
};

class Dog : public Animal{
	public:
		void makeNoise() override{
			std::cout << "Woof!" << std::endl;
		}
};

class Cat : public Animal{
	public:
		void makeNoise() override{
			std::cout << "Meow!" << std::endl;
		}
};

int main(){
	// Instantiate a Dog and Cat Class
	Dog dog;
	Cat cat;

	// Instantiate a pointer to the base class
	Animal* animal_ptr;

	// Point the pointer to the memory address for dog class. This will run
	// the dog's makeNoise method as it has been overridden.
	animal_ptr = &dog;
	animal_ptr -> makeNoise();

	// Point the pointer to the memory address for cat class. This will run
	// the cat's makeNoise method as it has been overridden.
	animal_ptr = &cat;
	animal_ptr -> makeNoise();
}

/*
 * OUTPUT:
 *   Woof!
 *   Meow!
 */
```

This can be further extended:
```cpp
#include <iostream>

class Animal{
	public:
		virtual void makeNoise(){
			std::cout << "Generic Animal Noise" << std::endl;
		}
};

class Dog : public Animal{
	public:
		void makeNoise() override{
			std::cout << "Woof!" << std::endl;
		}
};

class Cat : public Animal{
	public:
		void makeNoise() override{
			std::cout << "Meow!" << std::endl;
		}
};

int main(){
	Dog dog;
	Cat cat;

	Animal* animals[] = {&dog, &cat};

	for(Animal* animal : animals){
		animal -> makeNoise();
	}
}

/*
 * OUTPUT:
 *   Woof!
 *   Meow!
 */ 
```

Utilising an array of `Animal` pointers of references to two objects.

# Abstract Method
An abstract (otherwise known as a  *pure virtual function*) is one in which the subclass must override the base class.
```cpp
#include <iostream>

class Animal{
	public:
		virtual void makeNoise() = 0; // Setting to 0 makes it abstract
};

class Dog : public Animal{
	public:
		void makeNoise() override{
			std::cout << "Woof!" << std::endl;
		}
};

int main(){
	Dog dog;
	dog.makeNoise();
}

// OUTPUT: Woof!
```

If an object `Animal` was to be instantiated and the method `makeNoise` called, it would come up with an error.
```cpp
#include <iostream>

class Animal{
	public:
		virtual void makeNoise() = 0; // Abstract
};

int main(){
	Animal animal;
	animal.makeNoise();
}

/*
 * ERROR:
 *   main.cpp:9:12: error: variable type 'Animal' is an abstract 
 *     class Animal animal; 
 *                  ^
 *   main.cpp:5:16: note: unimplemented pure virtual method 'makeNoise' in 
 *   'Animal' 
 *                   virtual void makeNoise() = 0;
 *                                ^
 *   main.cpp:10:23: error: expected ';' after expression
 *       animal.makeNoise()
 *                         ^
 *                         ;
 *   2 errors generated.
 */
```

This is unlike the previous [[#Virtual Methods|virtual]] method that had an implementation, this would return `Generic Animal Noise`.