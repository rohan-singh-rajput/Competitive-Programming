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

int main() {

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int N;
  cin >> N;

  int cnt = 0;

  vi h(N);
  vi v(N);


  for (int i = 0; i < N; i++) {
    cin >> h[i];
    cin >> v[i];
  }


  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (h[i] == v[j]) {
        ++cnt;
      }
    }
  }

  cout << cnt << endl;
  

  return 0;
}
