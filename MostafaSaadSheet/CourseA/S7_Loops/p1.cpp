// Special sum
// Take N numbers as input


#include <iostream>

using namespace std;

int main(void) {
  int N;
  cin >> N;

  int i= 1;
  while (i<=N) {
    int sum = 0;

    int num;
    cin >> num;

    for (int inc = 0; inc < i; inc++) {
      sum+=num;
    }
    i++;
  }

  return 0;
}