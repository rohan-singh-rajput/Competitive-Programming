#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
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

    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &it : a)
            cin >> it;

        sort(a.begin(), a.end());

        bool okay = true;

        for (int i = 1; i < n; i++)
        {
            okay &= (a[i] - a[i - 1] <= 1);
        }

        if (okay)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}