#include <string>
#include <vector>

class Calculator {
 public:
  static Calculator &getInstance(int argc = 0, char const *argv[] = 0) {
    static Calculator instance(argc, argv);
    return instance;
  }

  Calculator(int argc, char const *argv[]) : _argc(argc) {
    for (int i = 0; i < _argc; i++) {
      _argv.push_back(std::string(argv[i]));
    }
  }

  bool isValid();
  double calculate();

 private:
  Calculator() {}
  ~Calculator() {}
  int _argc;
  std::vector<std::string> _argv;

  bool isDigit(std::string &input);
  bool isOperator(std::string &input);
};