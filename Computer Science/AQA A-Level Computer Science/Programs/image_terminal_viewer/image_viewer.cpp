#include <iostream>
#include <sstream>
#include <system_error>
#include <vector>

using std::string;
using std::vector;

struct Color{
  string hex;
  int r;
  int g;
  int b;
  int alpha;

  Color(std::string hex, int a){
    hex = hex.substr(1);
    r = std::stoi(hex.substr(0, 2), 0, 16);
    g = std::stoi(hex.substr(2, 2), 0, 16);
    b = std::stoi(hex.substr(4, 2), 0, 16);

    try{
      if(a != 0 || a != 1){
        throw "Alpha must be between 0 - 2";
      }
      alpha = a;
    } catch(const char* msg){
      std::cerr << msg << std::endl;
    }
  }
};

string convertToPixel(Color top_pixel, Color bottom_pixel){
  const wchar_t top_block = U'▀';
  const wchar_t bottom_block = U'▄';
  const wchar_t full_block = U'█';

  std::stringstream ansii;
  
}

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


  vector<vector<string> > mushroom = {
    {"#FFFFFF", "#FFFFFF", "#FFFFFF", "#FFFFFF", "#000000", "#000000", "#000000", "#FFFFFF", "#FFFFFF", "#FFFFFF", "#FFFFFF"},
    {"#FFFFFF", "#FFFFFF", "#000000", "#000000", "#38C172", "#38C172", "#38C172", "#000000", "#000000", "#FFFFFF", "#FFFFFF"},
    {"#FFFFFF", "#000000", "#38C172", "#38C172", "#38C172", "#FFFFFF", "#FFFFFF", "#38C172", "#38C172", "#000000", "#FFFFFF"},
    {"#FFFFFF", "#000000", "#FFFFFF", "#38C172", "#38C172", "#FFFFFF", "#FFFFFF", "#38C172", "#38C172", "#000000", "#FFFFFF"},
    {"#000000", "#FFFFFF", "#38C172", "#38C172", "#38C172", "#38C172", "#38C172", "#38C172", "#38C172", "#FFFFFF", "#000000"},
    {"#000000", "#38C172", "#38C172", "#000000", "#000000", "#000000", "#000000", "#000000", "#38C172", "#FFFFFF", "#000000"},
    {"#000000", "#38C172", "#000000", "#FFFFFF", "#000000", "#FFFFFF", "#000000", "#FFFFFF", "#000000", "#38C172", "#000000"},
    {"#FFFFFF", "#000000", "#000000", "#FFFFFF", "#000000", "#FFFFFF", "#000000", "#FFFFFF", "#000000", "#000000", "#FFFFFF"},
    {"#FFFFFF", "#FFFFFF", "#000000", "#FFFFFF", "#FFFFFF", "#FFFFFF", "#FFFFFF", "#FFFFFF", "#000000", "#FFFFFF", "#FFFFFF"},
    {"#FFFFFF", "#FFFFFF", "#FFFFFF", "#000000", "#000000", "#000000", "#000000", "#000000", "#FFFFFF", "#FFFFFF", "#FFFFFF"}

  };
  std::cout << ANSIIString(mushroom) << std::endl;

}
