#include <iostream>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy";
std::string answer(codeword.size(), '_');
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

greet();

while(answer != codeword && misses < 7){
    clear_screen();
    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    int letter_index = codeword_check(codeword, letter);
    if(letter_index > 0){
        answer[letter_index] = letter;
        guess = true;
    }

    if(guess){
        std::cout << "Correct!";
    } else {
        std::cout << "Incorrect! The tractor beam pulls the person in further.";
        incorrect.push_back(letter);
        misses++;
    }
}

end_game(answer, codeword);

}