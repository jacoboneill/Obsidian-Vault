#include <iostream>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy";
std::string answer(codeword.size(), '_');
int misses = 0;

greet();

while(answer != codeword && misses < 7){

    misses++;
}

end_game(answer, codeword);

}