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

  int i = 1, j = 1;
  int temp=0;

  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 5; j++) {
      cin >> temp;
      if (temp == 1) {
        break;
      }
    }

    if (temp == 1) {
        break;
      }
  }

  cout << abs(3 - i) + abs(3 - j) << endl;
  
  
  

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);


  return 0;
}
