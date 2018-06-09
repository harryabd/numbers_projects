#include <iostream>
using namespace std;

int main() {
  cout << "Please input the number of elements of the fibonacci sequence you require: " << endl;
  int index;
  cin >> index;
  cout << "Do you require only the final term or the entire sequence? Enter T for final term or S for entire sequence" << endl;
  char termOrSeq;
  cin >> termOrSeq;
  long int seq[index];
  seq[0] = 1;
  seq[1] = 1;
  if(index > 0) {
    for(int i = 2; i < index; i++) {
      seq[i] = seq[i - 1] + seq[i - 2];
    }
  }
  switch(termOrSeq) {
    case 'T':
      cout << "term #" << index << ": " << seq[index - 1] << endl;
      break;
    case 'S':
      for(int i = 0; i < index; i++) {
        cout << "term #" << i + 1 << ": " << seq[i] << endl;
      }
      break;
    default:
      cout << "Invalid response to question" << endl;
  }
  return 0;
}
