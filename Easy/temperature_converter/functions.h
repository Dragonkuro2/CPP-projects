#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>


// Every function has two versions, the first one always uses the formula and returns the result that we want.
// The second one checks the edge cases of our value because there is no value under 0k theoretically.
// I use this method to re-use our function inside other functions without printing anything.

double cel_to_fahr(double cel) {
  return ((cel * 9/5) + 32); // celsius to fahrenheit
}

double fahr_to_cel(double fahr) {
  return ((fahr - 32) * 5/9); // fahrenheit to celsius
}

double cel_to_kelv(double cel) {
  return (cel + 273.15); // celsius to kelvin
}

double kelv_to_cel(double kelv) {
  return (kelv - 273.15); // kelvin to celsius
}

double kelv_to_fahr(double kelv) {
  return ((kelv - 273.15) * 9/5 + 32); // kelvin to fahrenheit
}

double fahr_to_kelv(double fahr) {
  return ((fahr - 32) * 5/9 + 273.15); // fahrenheit to kelvin
}

// printing functions

void  celsius_to_fahrenheit(double value) {
  double fahrenheit {cel_to_fahr(value)};

  if (fahr_to_kelv(fahrenheit) >= 0)
    std::cout << "Temperature in fahrenheit: " << fahrenheit << "F" << std::endl;
  else
    std::cout << "Impossible!, there's no temperature under 0k" << std::endl;
}

void fahrenheit_to_celsius(double value) {
  double celsius {fahr_to_cel(value)};

  if (cel_to_kelv(celsius) >= 0)
    std::cout << "Temperature in celsius: " << celsius << "C" << std::endl;
  else
    std::cout << "Impossible!, there's no temperature under 0k" << std::endl;
}

void celsius_to_kelvin(double value) {
  double kelvin {cel_to_kelv(value)};

  if (kelvin >= 0)
    std::cout << "Temperature in kelvin: " << kelvin << "K" << std::endl;
  else
    std::cout << "Impossible!, there's no temperature under 0k" << std::endl;
}

void kelvin_to_celsius(double value) {
  double celsius {kelv_to_cel(value)};

  if (value >= 0) {
    std::cout << "Temperature in celsius: " << celsius << "C" << std::endl;
  } else {
    std::cout << "Impossible!, there's no termperature under 0k" << std::endl;
  }
}

void kelvin_to_fahrenheit(double value) {
  double fahrenheit {kelv_to_fahr(value)};
  if (value >= 0) {
    std::cout << "Temperature in fahrenheit: " << fahrenheit << "F" << std::endl;
  } else {
    std::cout << "Impossible!, there's no termperature under 0k" << std::endl;
  }
}

void fahrenheit_to_kelvin(double value) {
  double kelvin {fahr_to_kelv(value)};

  if (kelvin >= 0)
    std::cout << "Temperature in kelvin: " << kelvin << "K" << std::endl;
  else
    std::cout << "Impossible!, there's no termperature under 0k" << std::endl;
}

#endif  // FUNCTIONS_H