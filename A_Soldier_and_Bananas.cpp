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

    int n, k, w;
    std::cin >> k >> n >> w;

    int sum = 0;

    for (int i = 1; i <= w; i++)
    {
        sum += (k * i);
    }

    if (sum - n < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (sum - n) << endl;
    }
}