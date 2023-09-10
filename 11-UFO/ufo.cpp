#include <iostream>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy";
std::string answer(codeword.size(), '_');
int misses = 0;
std::vector<char> incorrect;
bool guess = false;

greet();

while(answer != codeword && misses < 7){
    clear_screen();
    display_misses(misses);
    display_status(incorrect, answer);

    misses++;
}

end_game(answer, codeword);

}