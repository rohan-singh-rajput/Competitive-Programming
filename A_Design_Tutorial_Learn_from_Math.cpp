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

    int n;
    std::cin >> n;

    int x = 1, y = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && (n - i) % 2 == 0)
        {
            cout << i << " " << (n - i) << "\n";
            break;
        }
    }
    return 0;
}