#include <iostream>
using namespace std;

int factorise(int num, int denom);

int main() {
  cout << "Enter the integer you wish to be factorised: " << endl;
  int value;
  cin >> value;
  int p = 2;
  if(value < 2) {cout << "No prime factors" << endl;}
  else {
    cout << "Prime factors of " << value << " are: ";
    for(int p = 2; value != 1;) {
      int factored = factorise(value, p);
      if(factored == value) {p++;}
      else {cout << p << ", "; value = factored;}
    }
  }
  cout << endl;
  return 0;
}

int factorise(int num, int denom) {
  if (num % denom == 0) {
    num /= denom;
  }
  return num;
}