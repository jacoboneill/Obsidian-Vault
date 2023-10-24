#include <iostream>
#include <vector>

struct Rule{
  int input;
  std::string output;
};

struct Ruleset{
  int start = 1;
  int end = 100;
  std::vector<Rule> rules = {
    {3, "Fizz"},
    {5, "Buzz"}
  };
};

int main(int argc, char* argv[]){
  Ruleset ruleset;

  for(int i = ruleset.start; i <= ruleset.end; i++){
    std::string output = "";

    for(Rule rule: ruleset.rules){ 
      if(i % rule.input == 0){ output += rule.output; }
    }

    if(output == ""){ output = std::to_string(i); }

    std::cout << output << std::endl;
  }
}
