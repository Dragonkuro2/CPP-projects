#include "calculator.h"

int main() {
  int option {};

  do {
    std::cout << "\n\t************************ MENU ************************\n\n";
    std::cout << "1) Addition" << std::endl;
    std::cout << "2) Subtraction" << std::endl;
    std::cout << "3) Multiplication" << std::endl;
    std::cout << "4) Division" << std::endl;
    std::cout << "0) Close" << std::endl;
    std::cout << "\n\tEnter your choice: ";
    std::cin >> option;

    switch (option) {
      case 1:
        Add();
        break;
      case 2:
        Subtract();
        break;
      case 3:
        Multiply();
        break;
      case 4:
        Divide();
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