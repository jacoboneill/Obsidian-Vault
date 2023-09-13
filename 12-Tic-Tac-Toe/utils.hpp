#include <vector>

void drawBoard(std::vector<char> board);
void drawInput(bool is_player_1s_turn);
int getInput(std::vector<char> board);
std::vector<char> updateBoard(int new_piece);
bool isWin(std::vector<char> board);
void drawWin(bool is_player_1s_turn);
