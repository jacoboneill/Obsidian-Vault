#include <iostream>
#include <vector>
using std::string;
using std::vector;

class Key{
  public:
    Key(string uuid) : key(uuid) {
      for(char c : key){
          keyhole += -c;
      }
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
  Key key;
}

