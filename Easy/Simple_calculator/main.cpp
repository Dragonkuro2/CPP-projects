#include "calculator.h"

int main() {
  int option {};

  do {
    std::cout << "\n\t************************ MENU ************************\n\n";
    std::cout << "1) Addition" << std::endl;
    std::cout << "2) Substraction" << std::endl;
    std::cout << "3) Multiplucation" << std::endl;
    std::cout << "4) Devision" << std::endl;
    std::cout << "0) Close" << std::endl;
    std::cout << "\n\tEnter you choice: ";
    std::cin >> option;

    switch (option) {
      case 1:
        Addition();
        break;
      case 2:
        Substraction();
        break;
      case 3:
        Multiplucation();
        break;
      case 4:
        Division();
        break;
      case 0:
        std::cout << "GoodBye!" << std::endl;
        break;
      default:
        std::cout << "\n\tEnter a valid option!" << std::endl;
        break;
    }
  } while (option != 0);


  return 0;
}