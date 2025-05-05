#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <stack>
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

  stack<int> recrs;

  while (N--) {
    int temp;
    cin >> temp;

    if (recrs.empty() == 1) {
      recrs.push(temp);
    }

    if (temp == -1 && recrs.top() == -1) {
      recrs.push(temp);
    }

    if (temp == -1 && recrs.top() == 1) {
      recrs.pop();
    }

    if (temp == 1 && recrs.top() == -1) {
      recrs.push(temp);
    }
  }

  cout << recrs.size() << endl;
  return 0;
}
