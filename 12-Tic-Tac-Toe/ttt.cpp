#include <iostream>
#include "utils.hpp"

int main(){

  bool win = false;
  std::vector<char> board(9);
  bool is_player_1s_turn = true;

  // while(!win){
    drawBoard(board);
    drawInput(is_player_1s_turn);
    // int new_piece = getInput();
    // board = updateBoard(new_piece);
    // if(isWin(board)){
      // win = true;
    // }
  // }

  // drawWin(is_player_1s_turn);
}
