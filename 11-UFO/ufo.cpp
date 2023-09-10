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

    std::vector<int> letter_indexes = codeword_check(codeword, letter);
    if(letter_indexes.size() > 0){
        for(int i=0; i < letter_indexes.size(); i++){
            answer[letter_indexes[i]] = letter;
        }
        guess = true;
    }

    if(guess){
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
        incorrect.push_back(letter);
        misses++;
    }

    guess = false;
}

end_game(answer, codeword);

}