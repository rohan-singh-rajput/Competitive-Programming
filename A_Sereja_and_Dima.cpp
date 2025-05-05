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
  int N;
  cin >> N;

  vi arr(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }

  bool turn = true;
  int s_cnt = 0, d_cnt = 0;

  int low = 0;
  int high = N - 1;

  while (low <= high) {
    if (arr[low] < arr[high]) {
      if (turn) {
        s_cnt += arr[high];
        turn = false;
      } else {
        d_cnt += arr[high];
        turn = true;
      }
      high--;
    } else {
      if (turn) {
        s_cnt += arr[low];
        turn  = false;
      } else {
        d_cnt += arr[low];
        turn = true;
      }
      ++low;
    }
  }

  cout << s_cnt << " " << d_cnt << endl;
  
  return 0;
}
