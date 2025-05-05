#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    int a;

    for (int i = 0; i < k; i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; i++)
    {
        cin >> b;

        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;

    return 0;
}