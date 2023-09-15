#include <vector>

std::vector<char> draw(std::vector<char> board, bool is_player_1);
bool togglePlayer(bool is_player_1s_turn);
bool isWin(std::vector<char> board);
void drawWin(bool is_player_1s_turn);
