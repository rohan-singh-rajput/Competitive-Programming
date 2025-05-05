#include <iostream>
#include <vector>
#include <set>
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

    set<int> res_set;
    for (int i = 0; i < 4; i++)
    {
        int temp;
        cin >> temp;
        res_set.insert(temp);
    }

    int cnt = 4 - res_set.size();

    cout << cnt << endl;

    return 0;
}