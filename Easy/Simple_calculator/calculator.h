#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

double values[2];

void Get_values(double (&values)[]) {
  std::cout << "Enter the first value: ";
  std::cin >> values[0];
  std::cout << "Enter the second value: ";
  std::cin >> values[1];
}

void Addition() {
  Get_values(values);
  double result = values[0] + values[1];
  std::cout << "The result is: " << result << std::endl;
}

void Substraction() {
  Get_values(values);
  double result = values[0] - values[1];
  std::cout << "The result is: " << result << std::endl;
}

void Multiplucation() {
  Get_values(values);
  double result = values[0] * values[1];
  std::cout << "The result is: " << result << std::endl;
}

void Division() {
  Get_values(values);
  if (values[1] == 0)
    std::cout << "Division by zero is impossible!" << std::endl;
  else {
    double result = values[0] / values[1];
    std::cout << "The result is: " << result << std::endl;
  }
}
#endif // CALCULATOR_H