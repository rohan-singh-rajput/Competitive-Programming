#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define input(n) std::cin >> n;
#define print(n) std::cout << n << "\n";
#define upper(in) std::transform(in.begin(), in.end(), in.begin(), ::toupper);
#define lower(in) std::transform(in.begin(), in.end(), in.begin(), ::tolower);

void FastInputOutput() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

int main() {

  int listSize;
  cin >> listSize;

  int listArray[listSize];

  for (int iter = 0; iter < listSize; iter++) {
    cin >> listArray[iter];
  }

  cout << listArray[0] << " ";
  for (int start = 1; start < listSize; ++start) {
    assert(listArray[start] >= listArray[start - 1]);
    if (listArray[start] != listArray[start - 1]) {
      cout << listArray[start] << " ";
    }
  }

  cout << endl;

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  return 0;
}
