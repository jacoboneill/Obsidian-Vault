#include <iostream>
#include <string>
typedef std::string String;

int main() {
  String bedroom = "You are found in a bedroom.";

  String bedroom_options =
      " What would you like to do?\n 1. Stay in room\n 2. Exit the room\n";

  String sleep = "\nYou go back to sleep\n";

  String teddy = "There is a brown teddy on the floor, it seems to be making a "
                 "noise, do you want to pick it up?\n 1. Yes\n 2. No\n";

  String secret = "The teddy tells you there is a secret room in the house. Do "
                  "you want to go explore?\n 1. Yes\n 2. No\n";

  String sparkle = "You walk into the room, you notice a sparkle in the corner "
                   "and a knocking from the door inside the room.\n 1. "
                   "Investigate the Sparkle\n 2. Investigate the door\n";

  String pen =
      "As you get closer to the sparkle you notice a pen on the floor.\n 1. "
      "Pick up pen\n 2. Leave pen and investigate the door\n";

  String monster =
      "You get closer to the door and it explodes into splinters. A ferocious "
      "beast emerges from the door!\n 1. Fight like a hero\n 2. Run away!\n";

  String fight_with_weapon =
      "You feel a strange tingle from your pocket. You pull out the pen to "
      "find it spring into a sword. You don't know how but you decide to swing "
      "at the monster! You give the monster a cut and hear a giant squeal. The "
      "monster starts shrinking down and within seconds it is no longer "
      "visible to the naked eye.\nYou decide to go back to bed to go to sleep "
      "with your victory.\n";

  String fight_without_weapon =
      "You lift your fists ready to fight the foul beast when its mouth grows "
      "to the size of a small car. You instantly get surrounded by its massive "
      "jaw and pass away peacefully.\n";

  int answer;
  bool sparkle_flag = false;
  bool weapon = false;

  std::cout << bedroom << bedroom_options;
  std::cin >> answer;
  if (answer == 1) {
    std::cout << sleep;
  } else if (answer == 2) {
    std::cout << teddy;
    std::cin >> answer;
    if (answer == 1) {
      std::cout << secret;
      std::cin >> answer;
      if (answer == 1) {
        std::cout << sparkle;
        std::cin >> answer;
        if (answer == 1) {
          sparkle_flag = true;
          std::cout << pen;
          std::cin >> answer;
          if (answer == 1) {
            weapon = true;
          }
          if (answer > 2) {
            std::cout << "Error, invalid response.";
          }
        }
        if (answer == 2 || sparkle_flag) {
          std::cout << monster;
          std::cin >> answer;
          if (answer == 1 && weapon) {
            std::cout << fight_with_weapon;
          } else if (answer == 1 && !weapon) {
            std::cout << fight_without_weapon;
          } else if (answer == 2) {
            std::cout << bedroom << sleep;
          }
        }
      } else if (answer == 2) {
        std::cout << bedroom << sleep;
      }
    } else if (answer == 2) {
      std::cout << bedroom << sleep;
    } else {
      std::cout << "Error, invalid response";
    }
  } else {
    std::cout << "Error, invalid response.";
  }
}
