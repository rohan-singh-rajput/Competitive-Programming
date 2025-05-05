#include <algorithm>
#include <iostream>
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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int num1, num2;
  cin >> num1 >> num2;

  cout << num1 + num2 << endl;
  cout << num1 - num2 << endl;
  cout << num1 * num2 << endl;
  cout << num1 / num2 << endl;

  return 0;
}
