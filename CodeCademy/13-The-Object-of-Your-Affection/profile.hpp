#include <string>
#include <vector>

class Profile{
  std::string _name;
  int _age;
  std::string _city;
  std::string _country;
  std::string _pronouns;
  std::vector<std::string> _hobbies;

  public:
    Profile(const std::string& name, int age, const std::string& city, const std::string& country, const std::string& pronouns);

    std::string view_profile();
    void add_hobby(const std::string& hobby);
};