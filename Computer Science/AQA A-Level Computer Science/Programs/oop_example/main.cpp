#include <iostream>
#include <vector>
#include <time.h>
using std::string;
using std::vector;

class Key{
  public:
    Key(string uuid){
      for(int i = 0; i < uuid.size(); i++){
          m_key += -uuid[i];
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
      m_keyhole(keyhole),
      m_current_gear(0),
      m_accelerating(false),
      m_locked(true)
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
    int m_current_gear;
    int m_max_gear;
    Key m_saved_key;
    bool m_accelerating;
    string m_keyhole;
    bool m_locked;
};

class Car : public Vehicle{
  public:
    Car(string registration_number, int max_gear, bool convertible, string keyhole=Key::generateKeyhole()) :
      Vehicle(registration_number, max_gear, keyhole),
      m_convertible(convertible),
      m_roof_down(false)
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
    bool m_roof_down;
};

class Cargo{
  public:
    Cargo(string item, float weight) : m_item(item), m_weight(weight) {}
    
    string getItem(){
      return m_item;
    }

    float getWeight(){
      return m_weight;
    }

    static bool equal(Cargo a, Cargo b){
      bool same = true;
      if(a.getItem() != b.getItem()){
        same = false;
      }

      if(a.getWeight() != b.getWeight()){
        same = false;
      }

      return same;
    }

  private:
    string m_item;
    float m_weight;
};

class Lorry : public Vehicle{
  
  public:
    Lorry(string registration_number, int max_gear, int load_capacity, string keyhole=Key::generateKeyhole()) :
      Vehicle(registration_number, max_gear, keyhole),
      m_load_capacity(load_capacity)
    {}

    void addCargo(Cargo cargo){
      m_cargo.push_back(cargo);
    }

    void removeCargo(Cargo cargo){
      for(int i = 0; i < m_cargo.size(); i++){
        if(Cargo::equal(m_cargo[i], cargo)){
          m_cargo.erase(m_cargo.begin() + i);
        } else {
          std::cerr << "Cargo not in hold" << std::endl;
        }
      }
    }

    string listCargo(){
      string list = "Cargo: \n";
      
      for(int i = 0; i < m_cargo.size(); i++){
        list += m_cargo[i].getItem() + ", " + std::to_string(m_cargo[i].getWeight()) + "KG\n";
      }

      return list;
    }

  private:
    int m_load_capacity;
    vector<Cargo> m_cargo;
};

class Motorbike : public Vehicle{
  public:
    Motorbike(string registration_number, int max_gear, int engine_size, string keyhole=Key::generateKeyhole()) :
      Vehicle(registration_number, max_gear, keyhole),
      m_engine_size(engine_size)
    {}

    int getEngineSize(){
      return m_engine_size;
    }

    void wheely(){
      std::cout << "Whee!" << std::endl;
    }

  private:
    int m_engine_size;  
};

int main(){
}

