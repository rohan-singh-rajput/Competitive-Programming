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
  string line = "qwertyuiopasdfghjkl;zxcvbnm,./";

  char inputChar;
  cin >> inputChar;

  string inputStr;
  cin >> inputStr;

  string ans;

  for (int i = 0; i < inputStr.length(); ++i) {
    int index = line.find(inputStr[i]);

    if (inputChar == 'R') {
      ans+=line[index-1];
    } else {
      ans+=line[index+1];
    }
  }

  cout << ans << endl;
  

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  return 0;
}
