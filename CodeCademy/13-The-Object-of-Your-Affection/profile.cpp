#include <string>
#include "profile.hpp"

Profile::Profile(const std::string& name, int age, const std::string& city, const std::string& country, const std::string& pronouns)
  : _name(name), _age(age), _city(city), _country(country), _pronouns(pronouns){};

std::string Profile::view_profile(){
  std::string stringified_profile = 
    "Name: " + _name + '\n' + 
    "Pronouns: " + _pronouns + '\n' + 
    "Age: " + std::to_string(_age) + '\n' + 
    "Location: " + _city + ", " + _country + '\n';

    if(_hobbies.size() > 0){
      stringified_profile += "Hobbies: ";
      for(int i = 0; i < _hobbies.size(); i++){
        stringified_profile += _hobbies[i];
        if(_hobbies.size() > 2 && i < _hobbies.size() - 1){
          stringified_profile += ", ";
        }
        if(_hobbies.size() > 1 && i == _hobbies.size() - 2){
          stringified_profile += "and ";
        }
        if(i == _hobbies.size() - 1){
          stringified_profile += '.';
        }
      }
    }

    return stringified_profile + '\n';
}

void Profile::add_hobby(const std::string& hobby){
  _hobbies.push_back(hobby);
}