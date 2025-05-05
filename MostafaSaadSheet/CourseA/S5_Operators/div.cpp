#include <iostream>


int main(void) {
  int input_num;
  std::cin >> input_num;

  int res = (input_num % 2 == 0) ? 100 : 7;
  std::cout<< res<<std::endl;
  


  return 0;
}