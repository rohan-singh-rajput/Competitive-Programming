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
  long long int n, m;
  cin >> n >> m;

  int cnt = 0;

  // TLE
  //   for (int i = 1; i <= m; ++i) {
  //     for (int j = 1; j <= n; ++j) {
  //       if ((long long int )(i + j) % 5 == 0) {
  //         ++cnt;
  //       }
  //     }
  //   }

  vi a(5, 0);
  vi b(5, 0);

  for (int i = 1; i <= n; i++) {
    a[i % 5]++;
  }
  for (int i = 1; i <= m; i++) {
    b[i % 5]++;
  }

  

  cout << cnt << endl;

  return 0;
}
