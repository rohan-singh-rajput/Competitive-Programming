#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int check_div(int a, int b)
{
    int res = 0;

    if (a % b == 0)
    {
        res = 0;
    }
    else
    {
        res = b - a % b;
    }

    return res;
}

int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    std::cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        cout << check_div(a, b) << endl;
    }
}
