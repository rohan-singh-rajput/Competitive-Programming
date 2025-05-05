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

    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        // a 1 | b 2

        if ((a + 2 * b) % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            if (a == 0 && b % 2 != 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}