#include <iostream>
#include <sstream>
#include <vector>

using std::string;
using std::vector;

string ANSIIString(vector<vector<string> > hex_bitmap){
	const string pixel_character = "▀";
	const string color_reset_string = "\x1b[0m";
  string ansii_string;

  for(int row = 0; row< hex_bitmap.size(); row+=2){
    
    for(int col = 0; col < hex_bitmap[row].size(); col++){
      std::stringstream foreground;
      std::stringstream background;

      string pixel_top = hex_bitmap[row][col].substr(1);
      foreground << "\x1b[38;2;" << std::stoi(pixel_top.substr(0, 2), 0, 16) << ';' << std::stoi(pixel_top.substr(2, 2), 0, 16) << ';' << std::stoi(pixel_top.substr(4, 2), 0, 16) << "m";
      if(row + 1 < hex_bitmap.size()){
        string pixel_bottom = hex_bitmap[row + 1][col].substr(1);
	      background << "\x1b[48;2;" << std::stoi(pixel_bottom.substr(0, 2), 0, 16) << ';' << std::stoi(pixel_bottom.substr(2, 2), 0, 16) << ';' << std::stoi(pixel_bottom.substr(4, 2), 0, 16) << "m";
      }
      
      ansii_string += foreground.str() + (background.str().size() > 0 ? background.str() : "") + pixel_character + color_reset_string;
    }
    
    ansii_string += '\n';
  }
  
  return ansii_string;
}

int main(int argc, char* argv[]){
	vector<vector<string> > hex_bitmap = {
		{"#E3342F", "#F6993F", "#FFED4A"},
		{"#38C172", "#4DC0B5", "#3490DC"},
		{"#6574CD", "#9561E2", "#F66D9B"},
    {"#FFFFFF", "#777777", "#000000"}
	};

  std::cout << ANSIIString(hex_bitmap) << std::endl;

}
