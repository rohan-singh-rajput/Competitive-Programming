#include <iostream>

using namespace std;

int main(void) {
  int inputNum;
  cin >> inputNum;
  
  int s1, e1, s2, e2, s3, e3;
  cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

  int cntIntervals = 0;

  cntIntervals += (inputNum >= s1 && inputNum <= e1) ? 1 : 0;
  cntIntervals += (inputNum >= s2 && inputNum <= e2) ? 1 : 0;
  cntIntervals += (inputNum >= s3 && inputNum <= e3) ? 1 : 0;

  cout<< cntIntervals << endl;

  return 0;
}