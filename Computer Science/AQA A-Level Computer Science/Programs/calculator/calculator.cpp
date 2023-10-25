#include <iostream>
#include <cmath>

class Boot{
  public:
    static bool validate(int argc, char* argv){}

  private:
    struct ValidationRule{
      bool rule;
      char* message[];
    };

    static bool hasExactlyTwoArguments(int argc){}
    static bool areAllIntegers(char* argv){}
};
