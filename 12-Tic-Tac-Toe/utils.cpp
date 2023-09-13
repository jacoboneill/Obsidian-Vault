#include <iostream>
#include <vector>
#include <stdexcept>

std::string generateRow(std::vector<char> board, int start, int end){
  std::string row;
  for(int i = start; i < end; i++) {
    row += "  " + (board[i] != '\0' ? std::string(1, board[i]) : " ") + "  ";
    if(i < end - 1){
      row += '|';
    }
  }
  return row + '\n';
}

std::string stringifyBoard(std::vector<char> board){  
  const int board_cell_count = 9;
  std::string stringified_board;

  for(int i=0; i < board_cell_count; i++){
    if(i % 3 == 0 || i == 8){
        stringified_board += "     |     |\n";
    } else if (i % 3 == 2){
      stringified_board += "_____|_____|_____\n";
    } else {
      stringified_board += generateRow(board, i-1, i+2);
    }
  }

  return stringified_board;
};

class InvalidSizeException : public std::exception {
  public:
    const char* what() const noexcept override {
      return "Vector size must be 9";
    }
};

void drawBoard(std::vector<char> board){
  if(board.size() !=9){ throw InvalidSizeException(); }

  std::cout << stringifyBoard(board);
};

// int main(){
//   std::vector<char> board(9);
//   drawBoard(board);
// };
