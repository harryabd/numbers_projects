// Calculates Pi to a given number of significant figures.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  cout << "Please input the number of digit's you want to know Pi to: " << endl;
  long double piEst = 4;
  int sigFigs;
  long double precision;
  cin >> sigFigs;
  precision = pow(10, -sigFigs);
  long double term = 1;
  int sign = 1;
  long int i;
  for(i = 1; term > precision / 2; i++) {
    term = 4.0 / (2.0 * i + 1);
    sign = -sign;
    piEst = piEst + sign * term;
  }
  cout << "Pi: " << fixed << setprecision(sigFigs - 1) << piEst << endl;
  return 0;
}
