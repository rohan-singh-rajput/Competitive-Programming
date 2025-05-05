#include <algorithm>
#include <cmath>
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
  long long int trainCnt = 0;
  long long int binToIntRes = 0;

  string numInput;
  cin >> numInput;

  for (int i = numInput.size()-1; i >= 0; i--) {
    
    if (numInput[i] == '1') {
      binToIntRes += pow(2, i);
      cout<<binToIntRes<<endl;
    }
  }

  cout << binToIntRes << endl;
  
  
  
  return 0;
}
