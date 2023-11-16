#include <iostream>
#include <vector>
#include <time.h>
using std::string;
using std::vector;

class Key{
  public:
    Key(string uuid){
    key = std::to_string(rand());  

    for(char c : key){
          keyhole += -c;
      }
    }

    static string generateKeyUUID(int seed=time(NULL)){
      srand(seed);
      return std::to_string(rand());
    }

    string getKey(){
      return key;
    }

    string getKeyhole(){
      return keyhole;
    }

  private:
    string key;
    string keyhole;
};

int main(){
  Key key(Key::generateKeyUUID());
  std::cout << key.getKey() << std::endl;
}

