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

    int temp = n;
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
        }
    }

    if (res % 7 == 0 || res % 4 == 0)
    {
        cout << "YES\n";
    }

    return 0;
}