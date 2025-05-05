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

int calcDistance(int x, int y) { return abs(y - x); }

int main() {

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int N;

  cin >> N;

  vi arr(N);

  for (int &it : arr) {
    cin >> it;
  }

  for (int i = 0; i < N; i++) {
    long long mini;
    long long maxi;
    if (!i) {
      mini = abs(arr[i] - arr[i + 1]);
      maxi = abs(arr[i] - arr[N - 1]);
    } else if (i == N - 1) {
      maxi = abs(arr[i] - arr[0]);
      mini = abs(arr[i] - arr[i - 1]);
    } else {
      mini = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
      maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[N - 1]));
    }

    cout << mini << " " << maxi << endl;
    
  }



  return 0;
}
