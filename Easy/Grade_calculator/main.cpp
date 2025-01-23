#include "grad.h"

int main() {
  int option {};
  do {
    std::cout << "\n\t*************** MENU ***************\n\n";
    std::cout << "1) Calculate your grade." << std::endl;
    std::cout << "2) Close." << std::endl;
    std::cout << "\n\tEnter your choice: ";
    std::cin >> option;

    switch (option) {
      case 1:
        Grad_calculator();
        break;
      case 2:
        std::cout << "Goodbye!" << std::endl;
        break;
      default:
        std::cout << "Enter a valid option!" << std::endl;
        break;
    }
  } while (option != 2);

  return 0;
}