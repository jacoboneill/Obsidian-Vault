#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listening to Audiobooks and Podcasts");
  sam.add_hobby("Playing Rec Sports like Bowling and Kickball");
  sam.add_hobby("Writing a Speculative Fiction Novel");
  sam.add_hobby("Reading Advice Columns");

  std::cout << sam.view_profile();

}