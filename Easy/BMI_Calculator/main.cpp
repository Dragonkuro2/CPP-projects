#include "header.h" // This header file includes the declaration of the calculate_bmi function and necessary libraries

int main() {
  int option {};

  do {
    std::cout << "\n\t************************ MENU ************************\n\n";
    std::cout << "1) Calculate your BMI." << std::endl;
    std::cout << "2) Close." << std::endl;
    std::cout << "\n\tEnter your option: ";
    std::cin >> option;
    switch (option) {
      case 1:
        calculate_bmi();
        break;
      case 2:
        std::cout << "GoodBye!" << std::endl;
        break;
      default:
        std::cout << "Enter a valid option!" << std::endl;
        break;
    }
  } while (option != 2);

  return 0;
}