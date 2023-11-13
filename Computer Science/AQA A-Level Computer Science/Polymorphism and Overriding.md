---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 50
---
# Polymorphism and Overriding
>[!definition]
> ***Literal***
>	To take on many shapes.
>	
>***Object Oriented Programming***
>	A situation where an inherited method from a base class can be redefined and used in different ways depending on the data in the subclass that inherited it.

Polymorphism allows for inherited methods and properties to be reimplemented instead of having to make a new method or property.

For example:
```cpp
#include <iostream>

class Animal{
    public:
        void makeSound(){
            std::cout << "Base Class" << std::endl;
        }
};

class Dog : public Animal{
  public:
    void makeSound(){
        std::cout << "Woof" << std::endl;
    }
};

class Cat : public Animal{
    public:
        void makeSound(){
            std::cout << "Meow" << std::endl;
        }
};


int main(){
    Animal base;
    Dog dog;
    Cat cat;
    
    base.makeSound();
    dog.makeSound();
    cat.makeSound();
    
    return 0;
}

/*
 * OUTPUT:
 *   Base Class
 *   Woof
 *   Meow
 */
```