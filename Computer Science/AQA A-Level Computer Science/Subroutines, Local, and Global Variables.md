# Specification Coverage
- 3.1.1.9 Exception handling
- 3.1.1.10 Subroutines (procedures / functions)
- 3.1.1.11 Parameters of subroutines
- 3.1.1.12 Returning a value / values from a subroutine
- 3.1.1.13 Local variables in subroutines
- 3.1.1.14 Global variables in a programming language

# Learning Objectives
- What a subroutine is and how they are used to create programs
- How to create a subroutine
- What parameters and arguments are and how they are used within a function
- What local and global variables are
- What an exception is and how a program should deal with it.

# Sections
- [[Subroutines]]
- [[Functions]]
- [[Parameters and Arguments]]
- [[Local and Global Variables]]
- [[Exception Handling]]

# Tasks
- Define the following terms and explain the differences between the two.
	- subroutine.
	- function.
		- A subroutine is a piece of code that can be called via its UID and doesn't return a value. A function is a subroutine that can take parameters and returns a value.
- Give examples of in-built functions you might find in a programming language.
	- `std::stoi`, `std::cout`, `vector.push_back([type])`
- Why is it good practice to construct programs using subroutines.
	- Code readability, local variables, and easier to debug due to its self-contained nature.
- What is the advantage of using functions.
	- Code readability, allows for complex code to not be in the middle of your main function and confuse the developer.
- Define the following terms and explain the difference between the two.
	- algorithm.
		- An algorithm is a piece of code that takes an input and gives an output. An algorithm would typically be found in a function.
	- program.
		- A program is the whole code, functions and subroutines working together.
- What is a module and how does it differ from a subroutine.
	- A module is a group of subroutines, a subroutine is a piece of callable code that will run some code.
- Explain how parameters and arguments are used to pass values and variables into functions.
	- Parameters and arguments are used to pass locally scoped variables from one subroutine to another one.
- Why is it good practice to use local variables whenever possible.
	- Allows for easier debugging as a local variable is self-contained, allows for the use of duplicate variable names in different context's (different functions), and means that a variable can't be changed while out of scope.
- Give an example of where you might use a global variable.
	- An API or database password.
- Explain how an exception handler works.
	- An exception handler works by changing the flow of a program depending on a condition. For example the program might try to divide two numbers, but if the denominator is a zero then it will `throw` an error which will change the logic flow.
# Study / Research Tasks
- Write a program that calculates the square and square root of any given number. Try to include the following features
	- subroutine
	- function
	- subroutine or function call
	- paramater or argument
	- local variable
	- global variable
		- [[Square and Square Root]]
- Extend your program to include other common mathematical functions
	- [[Square and Square Root Advanced]]
- Write a program that takes in a set of numbers and then calculates the mean, median and range using either in-built or user-defined functions
	- [[Mean, Median, Range]]
 - Find examples of typical events that would require exception handling code
	 - Divide by zero error, HTTP 400 code from an API.