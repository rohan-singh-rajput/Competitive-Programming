#include <algorithm>
#include <iostream>
#include <map>
#include <set>
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

void fastInputOutput() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

int main() {
  int kGames;
  cin >> kGames;

  int A = 0, D = 0;

  for (int i = 1; i <= kGames; i++) {
    char temp;
    cin >> temp;

    if (temp == 'A') {
      ++A;
    }
  }

  D = kGames - A;

  if (A == D) {
    cout << "Friendship\n";
  } else if (A > D) {
    cout << "Anton\n";
  } else {
    cout << "Danik\n";
  }

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  return 0;
}
