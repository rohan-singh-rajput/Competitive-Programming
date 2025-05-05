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
    cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            if (i % 2 == 0)
            {
                sum -= temp;
            }
            else
            {
                sum += temp;
            }
        }
        cout << sum << endl;
    }
}