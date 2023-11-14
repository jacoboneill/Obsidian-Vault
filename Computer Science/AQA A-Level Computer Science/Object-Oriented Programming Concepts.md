---
tags:
  - AQA-A-Level
  - Computer-Science
  - Section
page: 44
---
# Specification Coverage
- 3.1.2.1 Programming Paradigms
- 3.1.2.3 Object Oriented Programming

# Learning Objectives
- The key principles and methods of object-oriented programming (OOP) including encapsulation, inheritance, instantiation, polymorphism, abstraction and overriding.
- That OOP programs are made up of classes and objects.
- That classes are a blueprint containing properties and methods.
- That objects are instances of a class containing the same properties and methods of the class.
- How to create class diagrams.

# Sections
- [[Object-Oriented Programming]]
- [[Encapsulation]]
- [[Inheritance]]
- [[Class Diagrams for Inheritance]]
- [[Instantiation]]
- [[Polymorphism and Overriding]]
- [[Abstract, Virtual, and Static Methods]]
- [[Aggregation]]
- [[Design Principles]]

# Tasks
- In what way does OOP reflect the way things work in real life?
	- It creates objects with functions and properties and you program the way these objects interact with one another.
- Using a real-life example, define the following terms explaining the relationship between the three.
	- Class
		- The concept of a Car
		- A class is a blueprint of an object. In this case, the class is the concept of a car, not a car itself.
	- Object
		- An actual car
		- An object is an instance of a class. In this case, the object is a car like a VW Polo or a Ford Fiesta.
	- Inheritance
		- A car is a vehicle and inherits its traits.
		- Inheritance is when a class uses another *main class* to get it's traits. This main class may be inherited by multiple *sub-classes*, in this example the `Vehicle` could be the parent class of a `Car` class, as well as a `Lorry` class.
- Using the same real-life example, explain what properties and methods are.
	- Properties are data values in the class, for example a Car class may have a `std::string registration_number` property.
	- A method is a function in a class that interacts with properties in the class. For example a Car class may have a `std::string getRegistrationNumber()` method that returns the `registration_number`.
- Draw a class diagram for your real life example.
	- [[Class Diagram Example]]
- How does encapsulation prevent side-effects?
	- It prevents side-effects because it restricts the amount of data visible, as well as providing a clean interface to the developer. This reduces unintended behaviour of the object.
- What are the two main ways to instantiate an object?
	- Stack Allocated: `const Animal animal;`
	- Heap Allocated: `Animal* animal = new Animal(); delete animal`
- Explain the difference between static, virtual, and abstract methods.
	- A static method is a method that doesn't need an instance of the class. `static string speak(){ cout << "Hello!" << endl;` can be called with `ClassName::speak();`
	- A virtual method is a method in a base class that is intended to be overridden in a subclass. `virtual string speak(){ cout << "Hello!" << endl; }`
	- An abstract method, also known as a pure virtual class, is a virtual method but with no value. `virtual int getAge() = 0;`
- Explain the difference between composition aggregation and association aggregation.
	- Composition aggregation is grouping objects together with a parent object, when the parent goes out of scope, so do the dependent objects. Association aggregation is grouping objects together with a dependent object but if the dependent object goes out of scope, the grouped objects will still be in scope.
- What are polymorphism and overriding?
	- Polymorphism, meaning to morph into many, means to be able to treat an object as it's inherited type. Meaning a Cat and a Dog, if inherited from an Animal class, can be treated the same but have different functionality.
	- Overriding means to override the functionality of an inherited class. This is typically done by declaring the base classes method as `virtual` and using the `override` keyword in the sub-classes.
- What is an interface in the context of OOP?
	- An interface is an abstract class that has all the definitions of functionality but none of the implementation. It provides an interface for sub-classes to follow.
- Explain the three main design principles for effective design.
	- [[Design Principles#Encapsulate What Varies|Encapsulate What Varies]]
	- [[Design Principles#Favour Composition Over Inheritance|Favour Composition Over Inheritance]]
	- [[Design Principles#Program to Interfaces, Not Implementation|Program to Interfaces, Not Implementation]]
# Study / Research Tasks
- For your real-life example above, use an OOP programming language to implement a solution. Include the following features:
	- Objects created using Abstract, Virtual, and Static methods
	- Inheritance
	- Aggregation
	- Polymorphism
	- Public, Private, and Protected specifiers.
		- [[Object-Oriented Programming Example]]