#include <vector>

void display_misses(int misses);
void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);
void clear_screen();
int codeword_check(std::string codeword, char letter);