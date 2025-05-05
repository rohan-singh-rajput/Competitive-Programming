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
  fastInputOutput();
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }

  // no nested loops
  int indexArr[10000];
  for (int i = 0; i < N; i++) {
    indexArr[i] = 0;
  }

  for (int i = 0; i < N; i++) {
    indexArr[arr[i]] += 1;
  }

  for (int i = 0; i < 10000; i++) {
    cout << indexArr[arr[i]] << " ";
  }
  cout << endl;
  

  return 0;
}
