#include <vector>

void drawBoard(std::vector<bool> board);
void drawInput(bool is_player_1s_turn);
int getInput(); // Has private functions to handle cases.
std::vector<bool> updateBoard(int new_piece);
bool isWin(std::vector<bool> board);
void drawWin(bool is_player_1s_turn);
