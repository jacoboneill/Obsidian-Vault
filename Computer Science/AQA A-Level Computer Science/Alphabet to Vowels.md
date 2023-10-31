#Program 
# alphabet_to_vowels.cpp
```cpp
#include <iostream>

bool isVowel(char character){
	std::string vowels = "aeiou";
	
	for(char vowel : vowels){
		if(character == vowel){
			return true;
		}
	}
	
	return false;
}

int main(int argc, char* argv[]){
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	std::string vowels;
	
	for(char c : alphabet){
		if(isVowel(c)){
			vowels += c;
		}
	}
	
	std::cout << vowels << std::endl;
}

// OUTPUT: aeiou
```

## Explanation
### isVowel(char character)
```cpp
bool isVowel(char character){
	std::string vowels = "aeiou";
	
	for(char vowel : vowels){
		if(character == vowel){
			return true;	
		}
	}
	
	return false;
}
```

This first part of the code loops through a string using a C++11 *range based loop* to loop through the characters of a string containing all the vowels in the alphabet.
If the vowel matches the character, it exits the function, and therefore the loop, and returns `true`, else if it is never true it will return `false`.

### int main(int argc, char* argv\[\])
```cpp
int main(int argc, char* argv[]){
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	std::string vowels;
	
	for(char c : alphabet){
		if(isVowel(c)){
			vowels += c;
		}
	}
	
	std::cout << vowels << std::endl;
}
```

It first creates a string with all the letters of the alphabet, however this script could take any input string and give all the occurrences of a vowel.
It then initalises a string called `vowels`. After this, it loops through all the characters using a C++11 *range based loop* and checks if the character is a vowel using the `isVowel(char character)` function. If this returns true it appends the character to the `vowels` string.
After the loop has finished, it outputs the `vowels` string to the console.