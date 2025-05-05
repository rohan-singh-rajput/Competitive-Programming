#include <iostream>

using namespace std;

void solve() {
  int cnt[3] = {};
  for (int i = 0; i < 9; ++i) {
    char temp;
    cin >> temp;

    if (temp != '?') {
      cnt[temp - 'A'] += 1;
    }
  }
  
  for (int i = 0; i < 3; i++) {
    if (cnt[i] < 3) {
      cout << (char)('A' + i) << endl;
    }
  }
}

int main() {
  int tt;
  cin >> tt;
  for (int i = 1; i <= tt; i++) {
    solve();
  }
}