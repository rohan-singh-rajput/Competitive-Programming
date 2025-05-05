#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;

  int is_one = (b + 1) / 2;

  cout << is_one * (a * a) + 1 - is_one * (2 * a + 1) << endl;

  return 0;
}
