#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>

bool is_pos(double value) {
  return (value > 0);
}

// function that checks the status of the user based on his BMI
void BMI_status(double BMI) {
  std::cout << std::fixed << std::setprecision(2);
  if (BMI < 16) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Underweight (Severe thinness)" << std::endl;
  } else if (BMI >= 16 && BMI <= 16.9) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Underweight (Moderate thinness)" << std::endl;
  } else if (BMI >= 17 && BMI <= 18.4) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Underweight (Mild thinness)" << std::endl;
  } else if (BMI >= 18.5 && BMI <= 24.9) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Normal range" << std::endl;
  } else if (BMI >= 25 && BMI <= 29.9) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Overweight (Pre-obese)" << std::endl;
  } else if (BMI >= 30 && BMI <= 34.9) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Obese (Class I)" << std::endl;
  } else if (BMI >= 35 && BMI <= 39.9) {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Obese (Class II)" << std::endl;
  } else {
    std::cout << "Your Body mass index (BMI) is: " << BMI << ", it's Obese (Class III)" << std::endl;
  }
}

void calculate_bmi() {
  double BMI, height, mass;
  std::cout << "Enter your height (m): ";
  std::cin >> height;
  if (!is_pos(height)) {
    std::cout << "The height can't be a negative number or zero!" << std::endl;
    return;
  }

  std::cout << "Enter your weight (kg): ";
  std::cin >> mass;
  if (!is_pos(mass)) {
    std::cout << "The weight can't be a negative number or zero!" << std::endl;
    return;
  }

  BMI = mass / (height * height);

  // Check and display the BMI status of the user
  BMI_status(BMI);
}

#endif // HEADER_H