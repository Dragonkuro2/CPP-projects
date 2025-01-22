
#include "functions.h" // This header file includes the temperature conversion functions

int main() {
  int option {};
  double value {};

  do {
    std::cout << "\n\t******************** MENU ********************\n\n";
    std::cout << "1) convert from Celsius to Fahrenheit." << std::endl;
    std::cout << "2) convert from Fahrenheit to Celsius." << std::endl;
    std::cout << "3) convert from Celsius to Kelvin." << std::endl;
    std::cout << "4) convert from Kelvin to Celsius." << std::endl;
    std::cout << "5) convert from Kelvin to Fahrenheit." << std::endl;
    std::cout << "6) convert from Fahrenheit to Kelvin." << std::endl;
    std::cout << "0) close." << std::endl;
    std::cout << "\n\tEnter your choice: ";
    std::cin >> option;
    switch (option) {
      case 1:
        std::cout << "Enter the temperature on Celsius: ";
        std::cin >> value;
        celsius_to_fahrenheit(value);
        break;
      case 2:
        std::cout << "Enter the temperature on fahrenheit: ";
        std::cin >> value;
        fahrenheit_to_celsius(value);
        break;
      case 3:
        std::cout << "Enter the temperature on Celsius: ";
        std::cin >> value;
        celsius_to_kelvin(value);
        break;
      case 4:
        std::cout << "Enter the temperature on kelvin: ";
        std::cin >> value;
        kelvin_to_celsius(value);
        break;
      case 5:
        std::cout << "Enter the temperature on kelvin: ";
        std::cin >> value;
        kelvin_to_fahrenheit(value);
        break;
      case 6:
        std::cout << "Enter the temperature on fahrenheit: ";
        std::cin >> value;
        fahrenheit_to_kelvin(value);
        break;
      case 0:
        std::cout << "\tGoodbye!" << std::endl;
        break;
      default:
        std::cout << "\tEnter a valid option!" << std::endl;
        break;
    }
  } while (option != 0);

  return 0;
}