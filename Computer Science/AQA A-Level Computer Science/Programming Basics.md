# Specification Coverage
- 3.1.1.1 Data Types
- 3.1.1.2 Programming Concepts
- 3.1.1.6 Constants and variables in a programming language
- 3.5.1.2 Integers

# Learning Objectives
- The basic principles of writing in the form of programming code.
- What constants and variables are and how to use them.
- What the main data types are.
- How to store data using meaningful names.

# Sections
- [[Naming and Storing Data]]
- [[Constants and Variables]]
- [[Data Types]]
- [[Built-In and User-Defined Data Types]]

# Tasks
- Give two reasons why it is a good idea to use meaningful variable names.
	- Readability
	- Bug Tracing
- Use examples to explain the difference between constants and variables.
	- A constant is a persistent piece of data that doesn't change in a program, such as the value to convert ºC to ºF.
	- A variable is used to store a piece of data that will change through the programs lifetime. For example a variable could store a user's value for the temperature.
- Why is it important to declare all variables and constants at the beginning of a program?
	- To instantiate variables at the beginning to be later accessed in the program. This allows for scope.
- Explain the difference between a value and a variable
	- A variable is a place in memory in which a value is kept. For example if you have x = 12, x would be the variable and 12 would be the value.
- Suggest suitable data-types for:
	- The current rate of VAT.
		- float / double.
	- Todays date.
		- Date.
	- The total takings from a shop.
		- Float / double.
	- A persons date of birth.
		- Date.
	- Which wrist a person wears a watch.
		- Boolean with `isRight` or either a character array or string.

# Study / Research Tasks
- A list of data is also known as a one-dimensional array. Find out what two- and three-dimensional arrays are and give examples of where you might use each
	- A 2D array would be used for a matrix, such as a 2D graph or coordinates for pixels.
	- A 3D array could also be used for 3D graphs and 3D graphics.
- Identify the built-in data types for C++
	- `void`, an empty set of values, used for functions with no returns or generic pointers to untyped data.
	- `std::nullptr_t`, the type for the keyword `nullptr`. It is used to avoid ambiguity in pointers with no set value.
	- `bool`, a boolean type of true or false.
	- `char`, a type to store characters.
		- `signed char` and `unsigned char` work in the same way as signed and unsigned integers, as an integer can be stored in a char.
		- `wchar_t` is used for multi-byte characters, typically for Unicode characters.
		- `char8_t`, `char16_t`, and `char32_t` are used to store UTF8, UTF16, and UTF32 characters respectively.
	- `float`, `double`, and `long double` are types for storing numbers with a decimal place.
	- `int`, `signed int`, and `unsigned int` are integers.
		- You also have size modifiers of:
			- `short`: 16 bits / 2 bytes.
			- `long`: 32 bits / 4 bytes.
			- `long long`: 64 bits / 8 bytes.
	- The size of types are as follows:
		- 1 byte: `bool`, `char`, `char8_t`, `unsigned char`, `signed char`, `__int8`
		- 2 bytes: `char16_t`, `__int16`, `short`, `unsigned short`, `wchar_t`, `__wchar_t`
		- 4 bytes: `char32_t`, `float`, `__int32`, `int`, `unsigned int`, `long`, `unsigned long`
		- 8 bytes: `double`, `__int64`, `long double`, `long long`, `unsigned long long`