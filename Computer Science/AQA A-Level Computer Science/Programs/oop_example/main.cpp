#include <iostream>
#include <vector>
#include <time.h>
using std::string;
using std::vector;

class Key{
  public:
    Key(string uuid){
      for(char c : uuid){
          m_key += -c;
      }
    }

    Key() : m_key("") {}

    static string generateKeyhole(int seed=time(NULL)){
      srand(seed);
      return std::to_string(rand());
    }

    string getKey(){
      return m_key;
    }

  private:
    string m_key;
};

class Vehicle{
  public:
    Vehicle(string registration_number, int max_gear, string keyhole=Key::generateKeyhole()) :
      m_registration_number(registration_number),
      m_max_gear(max_gear),
      m_saved_key(Key()),
      m_keyhole(keyhole)
    {}

    int getGear(){
      return m_current_gear;
    }

    void gearUp(){
      if(m_current_gear < m_max_gear){
        m_current_gear++;
      }
    }

    void gearDown(){
      if(m_current_gear > -1){
        m_current_gear--;
      }
    }

    void goToGear(int gear){
      if(gear <= m_max_gear || gear >= -1){
        m_current_gear = gear;
      }
    }

    string getRegistrationNumber(){
      return m_registration_number;
    }

    void toggleAccelator(){
      !m_accelerating;
    }

    bool getAccelerating(){
      return m_accelerating;
    }

    void saveKey(Key key){
      if(m_saved_key.getKey() != ""){
        std::cerr << "Key already saved" << std::endl;
      } else {
        m_saved_key = key;
      }
    }

    void toggleLock(Key key){
      for(int i = 0; i < m_keyhole.size(); i++){
        if(key.getKey()[i] != -m_keyhole[i]){
          std::cerr << "Key does not match keyhole" << std::endl;
          return;
        }
      }

      !m_locked;
    }

    void toggleLoc(){
      toggleLock(m_saved_key);
    }

  private:
    string m_registration_number;
    int m_current_gear = 0;
    int m_max_gear;
    Key m_saved_key;
    bool m_accelerating = false;
    string m_keyhole;
    bool m_locked = true;
};

class Car : public Vehicle{
  public:
    Car(string registration_number, int max_gear, bool convertible, string keyhole=Key::generateKeyhole()) :
      Vehicle(registration_number, max_gear, keyhole),
      m_convertible(convertible)
    {}

    void toggleRoof(){
      if(m_convertible){
        std::cout << (m_roof_down ? "Roof Down" : "Roof Up") << std::endl;
      } else {
        std::cerr << "Roof not convertible" << std::endl;
      }
    }

  private:
    bool m_convertible;
    bool m_roof_down = false;
};

int main(){
}

