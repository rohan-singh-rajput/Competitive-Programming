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

  fastInputOutput();

  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  int kOccurences;
  cin >> kOccurences;

  int occurancesArray[kOccurences];

  for (int oIndex = 0; oIndex < kOccurences; ++oIndex) {
    cin >> occurancesArray[oIndex];
  }

  int trackCountArr[kOccurences];

  for (int i = 0; i < kOccurences; ++i) {
    trackCountArr[i] = -1;
  }

  for (int occIndex = 0; occIndex < kOccurences; ++occIndex) {
    for (int arrIndex = 0; arrIndex < N; ++arrIndex) {
      if (occurancesArray[occIndex] == arr[arrIndex]) {
        trackCountArr[occIndex] = arrIndex;
      }
    }
  }

  for (int i = 0; i < kOccurences; ++i) {
    cout << trackCountArr[i]<<" ";
  }
  cout << endl;
  

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  return 0;
}
