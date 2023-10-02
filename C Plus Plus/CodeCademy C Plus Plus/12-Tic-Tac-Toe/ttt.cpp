#include <iostream>
#include <vector>
#include "utils.hpp"

int main(){

  bool win = false;
  char winner;
  std::vector<char> board(9);
  bool is_player_1s_turn = true;
  int moves_played = 0;

  while(!win){
    board = draw(board, is_player_1s_turn);
    is_player_1s_turn = togglePlayer(is_player_1s_turn);
    if(moves_played >= 5){
      winner = isWin(board);
      win = winner != '\0';
    } else if(moves_played >= 9){
      break;
    }
    moves_played++;
  }

  if(win){
    drawWin(board, winner);
  } else {
    drawTie(board);
  }
}
