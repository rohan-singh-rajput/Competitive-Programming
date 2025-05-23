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
  int N, k;
  cin >> N >> k;

  int arr[k];

  while (N--) {
    int temp;
    cin >> temp;

    while (temp != 0) {
      int res = temp % 10;
      arr[res] +=1;
      temp = temp / 10;
    }
  }

  int maxEl = 0;
  for (int i = 0; i < k; i++) {
    if (arr[i] > maxEl) {
      maxEl = arr[i];
    }
  }

  cout<<maxEl<<endl;

  return 0;
}
