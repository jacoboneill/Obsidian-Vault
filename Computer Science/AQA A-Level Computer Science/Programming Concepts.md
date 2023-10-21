# Specification Coverage
- 3.1.1.2 Programming Concepts

# Learning Objectives
- Put lines of code in the correct sequence.
- Write an assignment statement.
- Write a selection statement.
- Write an iterative statement.
- Use loops.

# Sections
- [[Sequencing]]
- [[Assignment]]
- [[Selection]]
- [[Repetition (Iteration)]]

# Tasks
- Write examples of the three main types of programming statements:
	- Assignment
		- `age = 22`
	- Selection
		- `if(x = 1){ return true; } else { return false; }`
	- Iteration
		- `while (x != true){ doSomething(); }`
- Give two examples of where an iterative process might be used.
	- When a line of code needs to be repeated a predetermined number of times or after a condition has been met.
- Explain the concept of a nested statement
	- A statement which is wrapped around another statement of the same kind. For example nested selection or iteration statements.
- Why is the sequence of programming statements so important? Use an example to explain.
	- If the sequence is done in the wrong order then the program will give unexpected results, for example if a variable is assigned after it is used then the compiler won't know the variable exists and give a syntax error.
- What is syntax and why is it so important? Use an example to explain.
	- The syntax is the way a programming language is structured. For example if you wrote `32 = x`, this would not be the same as `x = 32` as the syntax is wrong. The program would assume you are trying to assign the value of `x` to `32`.
# Study / Research Tasks
- Identify a real-life situation where it might be useful to use the following constructs within a program:
	- Iteration
		- You could use iteration when giving instructions, for example: `Walk three steps forwards`, instead of `Walk forwards, walk forwards, walk forward`.
	- Selection
		- You could use selection when trying to figure out if you need to add more salt to a dish `IF salt_level = not_salty_enough THEN addSalt()`.
- Write a program that reads in a file of test marks and then converts them to grades
	- [[Test Marks to Grades]]
- Write a program that works out the postage charges for parcels of different weights
	- [[Weight to Postage Charge]]
- Write a program that simulates the odometer on a car
	- [[Odometer]]