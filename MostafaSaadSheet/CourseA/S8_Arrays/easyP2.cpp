#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <utility>
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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int arrSize;
  cin >> arrSize;

  int arr[arrSize];

  for (int i = 0; i < arrSize; i++) {
    cin >> arr[i];
  }

  // original array
  //   for (int i = 0; i < arrSize; i++) {
  //     cout << arr[i]<<" ";
  //   }

  int minPosElem = INT_MAX;
  int maxPosElem = INT_MIN;

  // minimum and maximum number's index
  for (int index = 0; index < arrSize; ++index) {
    if (arr[index] < minPosElem) {
      minPosElem = arr[index];
    }

    if (arr[index] > maxPosElem) {
      maxPosElem = arr[index];
    }
  }

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] == maxPosElem) {
      arr[i] = minPosElem;
    } else if (arr[i] == minPosElem) {
      arr[i] = maxPosElem;
    }
  }

  // swapped array
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << " ";
  }

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  return 0;
}
