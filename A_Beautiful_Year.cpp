#include <iostream>
#include <set>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(void) {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  std::cin >> n;

  while (true) {
    n += 1;
    int a = n / 1000;
    int b = n /100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      break;
    }
  }
  cout << n << endl;
  

  return 0;
}