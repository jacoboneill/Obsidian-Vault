#include <iostream>
#include <cstdlib>

int main(){
  std::cout << "MAGIC 8-BALL: ";
  srand(time(NULL));
  int answer = std::rand() % 10;

  switch (answer){
    case 0:
      std::cout << "It is certain.";
      break;

    case 1:
      std::cout << "It is decidedly so.";
      break;

    case 2:
      std::cout << "Without a doubt";
      break;

    case 3:
      std::cout << "Yes - definitely.";
      break;

    case 4:
      std::cout << "You may rely on it.";
      break;

    case 5:
      std::cout << "Very doubtful.";
      break;

    case 6:
      std::cout << "Outlook not so good.";
      break;

    case 7:
      std::cout << "My sources say no.";
      break;

    case 8:
      std::cout << "My reply is no.";
      break;

    case 9:
      std::cout << "Don't count on it.";
      break;

    default:
      break;
  }

  std::cout << '\n';
}