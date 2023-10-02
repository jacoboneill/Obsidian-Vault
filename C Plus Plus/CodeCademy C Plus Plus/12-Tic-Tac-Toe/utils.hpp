#include <vector>

std::vector<char> draw(std::vector<char> board, bool is_player_1s_turn);
bool togglePlayer(bool is_player_1s_turn);
char isWin(std::vector<char> board);
void drawWin(std::vector<char> board, char winner);
void drawTie(std::vector<char> board);
