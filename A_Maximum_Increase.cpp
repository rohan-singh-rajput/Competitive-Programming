#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include<map>

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

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i + 1] <= n && arr[i] > arr[i + 1]) {
      ++cnt;
    }
  }
  cout << cnt << endl;
  
}

int main() {

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  solve();

  return 0;
}
