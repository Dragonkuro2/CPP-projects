#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>


// Every function has two versions, the first one always uses the formula and returns the result that we want.
// The second one checks the edge cases of our value because there is no value under 273.15k theoretically.
// I use this method to re-use our function inside other functions without printing anything.

double cel_to_fahr(double cel) {
  return ((cel * 9/5) + 32); // celsuis to fahrenheit
}

double fahr_to_cel(double fahr) {
  return ((fahr - 32) * 5/9); // fahrenheit to celsuis
}

double cel_to_kelv(double cel) {
  return (cel - 273.15); // celsuis to kelvin
}

double kelv_to_cel(double kelv) {
  return (kelv + 273.15); // kelvin to celsuis
}

double kelv_to_fahr(double kelv) {
  return ((kelv - 273.15) * 9/5 + 32); // kelvin to fahrenheit
}

double fahr_to_kelv(double fahr) {
  return ((fahr - 32) * 5/9 + 273.15); // fahrenheit to kelvin
}

// printing functions

void  celsuis_to_fahrenheit(double value) {
  double fahrenheit {cel_to_fahr(value)};

  if (fahr_to_kelv(fahrenheit) >= -273.15)
    std::cout << "Tempurature in fahrenheit: " << fahrenheit << "F" << std::endl;
  else
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
}

void fahrenheit_to_celsuis(double value) {
  double celsuis {fahr_to_cel(value)};

  if (cel_to_kelv(celsuis) >= -273.15)
    std::cout << "Tempurature in celsuis: " << celsuis << "C" << std::endl;
  else
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
}

void celsuis_to_kelvin(double value) {
  double kelvin {cel_to_kelv(value)};

  if (kelvin >= -273.15)
    std::cout << "Tempurature in kelvin: " << kelvin << "K" << std::endl;
  else
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
}

void kelvin_to_celsuis(double value) {
  double celsuis {kelv_to_cel(value)};

  if (value >= -273.15) {
    std::cout << "Tempurature in celsuis: " << celsuis << "C" << std::endl;
  } else {
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
  }
}

void kelvin_to_fahrenheit(double value) {
  double fahrenheit {kelv_to_fahr(value)};
  if (value >= -273.15) {
    std::cout << "Tempurature in fahrenheit: " << fahrenheit << "F" << std::endl;
  } else {
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
  }
}

void fahrenheit_to_kelvin(double value) {
  double kelvin {fahr_to_kelv(value)};

  if (kelvin >= 273.15)
    std::cout << "Temperature in kelvin: " << kelvin << "K" << std::endl;
  else
    std::cout << "Impossible!, there's no termperature under -273.15k" << std::endl;
}

#endif  // FUNCTIONS_H