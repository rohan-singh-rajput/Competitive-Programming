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

    int k;
    cin >> k;

    for (int i = 1; i <= 9; i++)
    {
        int res = (n * i) % 10;
        if (res == 0 || res - k == 0)
        {
            cout << i << endl;
            break;
        }
    }
}