#include <iostream>


int main(void) {
  int inputNum;
  std::cin >> inputNum;

  int nYears, nMonths, nDays;

  nYears = inputNum / 360;
  inputNum %= 360;
  nMonths = inputNum /  30;
  inputNum %= 30;
  nDays = inputNum;

  std::cout<<nYears<<" "<<nMonths<<" "<<nDays<<std::endl;
  


  return 0;
}