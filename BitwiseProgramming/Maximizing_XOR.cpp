#include <iostream>

using namespace std;

int main(void) {
  int l, r;
  cin >> l >> r;

  int max_xor = 0;

  for (int i = l; i <= r; ++i) {
    for (int j = i; j <= r; ++j) {
      max_xor = ((i^j) > max_xor) ? (i ^ j) : max_xor;
    }
  }

  cout << max_xor << endl;

  return 0;
}