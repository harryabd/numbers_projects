// Calculates Pi to a given number of significant figures.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Please input the number of digit's you want to know Pi to: " << endl;
  double piEst = 4;
  int sigFigs;
  double precision;
  cin >> sigFigs;
  precision = pow(10, -sigFigs);
  cout << precision << endl;
  return 0;
}