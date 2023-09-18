#include <string>
#include <regex>

class Bleep {
public:
    Bleep(const std::string& target, std::string& text)
        : _target(target), _text(text) {
          for(int i = 0; i < _target.size(); i++){
            _censored += '*';
          }
        }

    void censor() {
      std::regex regex_word("\\b" + _target + "\\b", std::regex_constants::icase);
      _text = std::regex_replace(_text, regex_word, _censored);
    }

private:
    std::string _target;
    std::string& _text;
    std::string _censored;
};
