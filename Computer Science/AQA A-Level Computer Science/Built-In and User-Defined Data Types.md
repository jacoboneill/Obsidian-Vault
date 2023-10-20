# Built-In Types
Built-in types are types which a programming language has made (see [[Data Types]]).

# User-Defined Types
User-defined types are types made up of built-in types that are created by the user.
In C++, a user-defined type can be implemented via either a `struct` or `class`.

An example of a user-defined type could be:
```cpp
#include <string>
#include <iostream>

/*
	A User-Defined type called Login that has a 15 character username and an 
	integer user ID.
*/
struct Login{
	char[15] username;
	int user_id;
};

int main(int argc, char* argv[]){
	Login user1;
	user1.username = "john_smith";
	user1.user_id = 1;
	
	std::cout << user1.username << ", " << user1.user_id << std::endl;
	
	return 0;
}

// OUTPUT: john_smith, 1
```

The reason why you may want to do this is to keep your code organised and to allow reusability of code.