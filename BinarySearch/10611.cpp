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

typedef struct Pair {
  int low;
  int high;
} Pair;

Pair binarySearch(int arr[], int N, int target) {
  Pair res;
  if (N <= 3) {
    if (arr[0] < target) {
      res.low = arr[0];
    } else {
      res.low = -1;
    }

    if (arr[N - 1] > target) {
      res.high = arr[N - 1];
    } else {
      res.high = -1;
    }
    return res;
  }

  int low = 0, high = N - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (target == arr[mid]) {
      
    }
  }
}

int main() {

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int N;
  cin >> N;

  int lChimps[N];

  for (int i = 0; i < N; i++) {
    cin >> lChimps[i];
  }

  int Q;
  cin >> Q;

  int lHeight[Q];
  for (int i = 0; i < Q; i++) {
    cin >> lHeight[i];
  }

  for (int i = 0; i < Q; i++) {
    binarySearch(lChimps, N, lHeight[i]);
  }

  return 0;
}
