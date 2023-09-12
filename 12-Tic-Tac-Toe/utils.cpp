#include <iostream>
#include <vector>

void drawBoard(std::vector<bool> board){
  // Assume that true is X and false is O

  std::string stringifiedBoard;
  for(int i=0; i < 8; i++){
    std::cout << i % 3 << '\n';
  }
}


int main(){
  std::vector<bool> board = {true,false,true,true,true,true,false,false,true};
  drawBoard(board);
}
