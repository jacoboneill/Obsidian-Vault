#include <iostream>
#include <string>
#include <vector>
#include <cctype>

class ArgumentValidator {
public:
    static bool validate(int argc, char* argv[]) {
        std::vector<ValidationRule> rules = {
            {&hasExactlyNArguments, "Exactly 2 arguments required"},
            {&areAllIntegers, "All arguments must be integers"}
        };

        for (const ValidationRule& rule : rules) {
            if (!(rule.rule)(argc, argv)) {
                std::cerr << "Error: " << rule.message << std::endl;
                return false;
            }
        }

        return true;
    }

private:
    struct ValidationRule {
        bool (*rule)(int argc, char* argv[]);
        std::string message;
    };

    static bool hasExactlyNArguments(int argc, char* argv[]) {
        return argc == 3;  // Adjust as needed
    }

    static bool areAllIntegers(int argc, char* argv[]) {
        for (int i = 1; i < argc; i++) {
            for (char* c = argv[i]; *c != '\0'; c++) {
                if (!std::isdigit(*c)) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    if (ArgumentValidator::validate(argc, argv)) {
        // Your program logic here
    }

    return 0;
}
