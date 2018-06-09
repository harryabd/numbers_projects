// Calculates e to a given number of significant figures.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long int factorial(int n);

int main() {
  cout << "Please input the number of digit's you want to know e to: " << endl;
  long double eEst = 0;
  int sigFigs;
  float precision;
  cin >> sigFigs;
  precision = pow(10, -sigFigs);
  long double term = 1;
  int sign = 1;
  long int i;
  for(i = 0; term > precision; i++) {
    term = (2 * i + 2.0) / factorial(2 * i + 1);
    eEst = eEst + term;
  }
  cout << "e: " << fixed << setprecision(sigFigs - 1) << eEst << endl;
  return 0;
}

long long int factorial(int n) {
  long long int f = n;
  for(int i = 1; i < n; i++) {
    f = f * (n - i);
  }
  return f;
}
