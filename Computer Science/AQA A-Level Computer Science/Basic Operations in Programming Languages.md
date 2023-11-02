---
tags:
  - AQA-A-Level
  - Computer-Science
  - Section
---
# Specification Coverage
- 3.1.1.3 Arithmetic Operations in a Programming Language
- 3.1.1.4 Relational Operations in a Programming Language
- 3.1.1.5 Boolean Operations in a Programming Language
- 3.1.1.7 String-Handling Operations in a Programming Language
- 3.1.1.8 Random Number Generation in a Programming Language

# Learning Objectives
- The correct syntax for writing basic programming code
- How to construct arithmetic operations, Boolean operations, and relational operations
- How to handle basic String operations
- How C++ and Python implement these operations

# Sections
- [[Arithmetic Operations]]
- [[Relational Operations]]
- [[Boolean Operations]]
- [[String Handling Functions]]
- [[Examples of Common Operations in Python and C++]]

# Tasks
- Write an example of a calculation using each of the arithmetic operators.
	- [[Examples of Arithmetic Operators]]
- What is the difference between a division of a `real` and the division of an `int`?
	- When you have a division of a `real`, the output will be a `float`. When you divide with an `int`, the output will be a rounded down to the closest `int`.
- Most calculations will get their values from variables. Why are variables used in programming rather than typing the raw values?
	- Allows for mutability of data for the developer, as well as giving readability.
- Use examples to explain the difference between truncation and rounding.
	- Truncation is removing decimal places i.e. 3.1415 truncated to 2 decimal places would be 3.14. It doesn't follow any rounding rules.
	- Rounding is removing decimal places and then changing the lowest decimal place depending on if the last removed decimal place was >= 5. i.e. 3.141 rounded to 2 decimal places would be 3.14, however 3.145 rounded to 2 decimal places would be 3.15.
- Why might random numbers be used?
	- Random numbers are used for machine learning as well as generating random dummy data for testing.
- What is the difference between and `OR` statement and an `XOR` statement? Give an example.
	- [[Difference Between OR and XOR]]
- How can you get a substring from a string?
	- [[Getting a Substring From a String]]
- What formats can strings be converted to?
	- In C++, strings can be converted into `int` types, `float` types, and `char` types.
- Why are random numbers generated in programming languages not entirely random?
	- Because they rely on a seed. RANDOM.org uses atmospheric pressures for their seeds however if you know the seed and algorithm, you can regenerate the *pseudo-random* number.
# Study / Research Tasks
- Write code for a calculator app that allows the user to enter one or more numbers and then carry out all the main arithmetic operations
	- [[./Calculator.md|Calculator]]
- Write code for an app that allows the user to input two numbers then carry out each of the relational operators returning an output of `TRUE` or `FALSE`.
	- [[Number Relator]]
- Write code for an app that extracts the vowels from the alphabet
	- [[Alphabet to Vowels]]
- Write code for an app that takes the numbers 1 - 10 and extracts them into odd and even numbers.
	- [[Odd and Even]]
- Research how Google uses boolean operators to create accurate search results
	 - Google uses a syntax with `"[search term]"` to get exact finds. This would use the `==` operator to check if true, and then send this to the client.
- Is it possible to produce a completely random number
	 - Computers can never truly produce a random number as it is based on a seed for a pseudo-random number generator function. Even if this number is unpredictable like atmospheric noise or cosmic radiation, if you input the same measurement as the seed, you will get the same output, therefore the number is never truly random, however it is very close.