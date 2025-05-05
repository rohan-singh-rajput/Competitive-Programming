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

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  string str1, str2;
  cin >> str1 >> str2;

  int res = 0;

  lower(str1);
  lower(str2);

  if (str1 == str2) {
    res = 0;
  } else if (str1 < str2) {
    res = -1;
  } else {
    res = 1;
  }

  cout << res << endl;

  return 0;
}
