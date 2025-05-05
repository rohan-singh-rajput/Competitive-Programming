#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;


    for(int i=0;i<s1.length();++i) {
      if (s1[i] == s2[i]) {
        cout<<'0';
      } else {
        cout<<'1';
      }
    }
    cout << endl;
    return 0;
    
}