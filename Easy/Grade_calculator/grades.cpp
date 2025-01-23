#include "grades.h"

void Grad_calculator() {
  int option {};
  do {
    std::cout << "\n\t\tSelect an option:" << std::endl;
    std::cout << "\t1) Calculte your mark by GPA." << std::endl;
    std::cout << "\t2) Calculte your mark by percentage." << std::endl;
    std::cout << "\t3) Close." << std::endl;
    std::cout << "\n\tEnter your choice: ";
    std::cin >> option;
    switch (option) {
      case 1:
        GPA_calculator();
        break;
      case 2:
        Percent_calculator();
        break;
      case 3:
        std::cout << "GoodBye!" << std::endl;
        break;
      default:
        std::cout << "Invalid option. Please enter a number between 1 and 3." << std::endl;
        break;
    }
  } while (option !=3);
}

std::string mark_checker(double result) { // function that gives final result if the user fail or he passed well
  if (result < 0.6)
    return "F";
  else if (result >= 0.6 && result < 0.7)
    return "D";
  else if (result >= 0.7 && result < 0.8)
    return "C";
  else if (result >= 0.8 && result < 0.9)
    return "B";
  else
    return "A";
}

double *Get_marks() {
  int subjects, range;
  std::cout << "How many subjects do you have: ";
  std::cin >> subjects;
  std::cout << "Your marks are between zero and what (10, 20, 100...): ";
  std::cin >> range;

  while (subjects <= 0) { // check if the user enter a valid number more than 0
    std::cout << "Number of subjects can't be less than or equal to zero!" << std::endl;
    std::cout << "Enter the number of objects: ";
    std::cin >> subjects;
  }

  double *marks = new double[subjects + 2] {}; // initialazing all elements of the array to zero.
  marks[0] = subjects; // the first element of the array has the number of the subjects
  marks[1] = range;   // the second element has the rang of the marks
  for (int i {2}; i < subjects + 2; i++) {
    std::cout << "Enter the mark number " << i << ": ";
    std::cin >> marks[i];
    if (marks[i] > range || marks[i] < 0) {
      std::cout << "mark more than allowed range or less than zero isn't accepted!" << std::endl; // if the user put a value more than the intial
      --i;                                                  // range I'll just delete it and ask him to enter it again until he put a valid number.
    }
  }

  return (marks);
}

void GPA_calculator() {
  double *marks = Get_marks();
  double result {};
  for (int i = 2; i < marks[0] + 2; i++) {
    result += marks[i];
  }

  result /= marks[0];
  std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
  std::cout << "Your GPA is: " << result << "/" << marks[1] << " - " << mark_checker(result/marks[1]) << std::endl;
}

void Percent_calculator() {
  double *marks = Get_marks();
  double result {};
  for (int i = 2; i < marks[2] + 2; i++) {
    result += marks[i];
  }

  result /= marks[0];
  result /= marks[1];
  result *= 100;
  std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
  std::cout << "your result by percentage: " << result << "% - " << mark_checker(result / 100) << std::endl;
}
