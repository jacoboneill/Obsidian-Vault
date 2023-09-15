#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstdlib>

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

void drawBoard(std::vector<char> board){
  if(board.size() !=9){ throw std::invalid_argument("Board must contain 9 items"); }

  std::cout << stringifyBoard(board) << "\n\n";
};

std::vector<int> getEmptyValues(std::vector<char> board){
  std::vector<int> empty_values;

  for(int i = 0; i < board.size(); i++){
    if(board[i] == 0){ empty_values.push_back(i); }
  }

  return empty_values;
};

void drawInputPrompt(std::vector<int> empty_values){
  std::cout << "Please pick from the following options: ";
  
  for(int i = 0; i < empty_values.size(); i++){
    std::cout << empty_values[i] + 1;
    if(i < empty_values.size() - 2){
      std::cout << ", ";
    }
    if(i == empty_values.size() - 2){
      std::cout << " or ";
    }
  }
  std::cout << ": ";
}

int convertStringToInt(std::string in){
  if(in.size() == 1){
    if(isdigit(in[0])){
      return in[0] - '0' - 1;
    }
  }
  return -1;
}

bool userIndexValid(std::vector<int> empty_values, int target){
  for(int i = 0; i < empty_values.size(); i++){
    if(empty_values[i] == target){
      return true;
    }
  }
  return false;
}

void clearScreen(){
  system("clear");
}

int getInputValue(std::vector<int> empty_values){
  std::string user_input;
  int user_index;
  int piece = -1;
  
  std::cin >> user_input;

  user_index = convertStringToInt(user_input);
  if(userIndexValid(empty_values, user_index)){
    piece = user_index;
  }

  return piece;
};

int getInput(std::vector<char> board){
  std::vector<int> empty_values = getEmptyValues(board);
  drawInputPrompt(empty_values);
  return getInputValue(empty_values);
}

std::vector<char> updateBoard(std::vector<char> board, int index, bool is_player_1s_turn){
  board[index] = (is_player_1s_turn ? 'X' : 'O');
  return board;
}

std::vector<char> draw(std::vector<char> board, bool is_player_1s_turn, int debug_a, bool debug_b, char debug_c){
  int index = -1;
  while(index == -1){
    clearScreen();
    std::cout << 
      "move count: " << debug_a << '\n' <<
      "win: " << debug_b << '\n' <<
      "isWin: " << debug_c << '\n' <<
      "win = '\\0': " << (debug_c == '\0') << "\n\n\n";

    drawBoard(board);
    index = getInput(board);
  }

  return updateBoard(board, index, is_player_1s_turn);
}

bool togglePlayer(bool is_player_1s_turn){
  return !is_player_1s_turn;
}

char isWin(std::vector<char> board){
  for(int i = 0; i < board.size()/3; i++){
    bool row_win = board[i * 3] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2];
    if(row_win){
      return board[i * 3];
    }
    
    bool col_win = board[i] == board[i + 3] && board[i + 3] == board[i + 6];
    if(col_win){
      return board[i];
    }
  }

  bool diag_win = 
    board[0] == board[4] && board[4] == board[8] ||
    board[2] == board[4] && board[4] == board[6];

  if(diag_win){
    return board[4];
  }

  return '\0';
}

void drawWin(std::vector<char> board, char winner){
  clearScreen();
  drawBoard(board);
  std::cout << "Congratulations " << winner << "!" << '\n';
}

void drawTie(std::vector<char> board){
  clearScreen();
  drawBoard(board);
  std::cout << "The game was a tie." << '\n';
}