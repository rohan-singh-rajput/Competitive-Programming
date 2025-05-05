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

    int res = 0;

    while (n != 0)
    {
        if (n >= 5)
        {
            n = n - 5;
            ++res;
        }
        else if (n >= 4)
        {
            n = n - 4;
            ++res;
        }
        else if (n >= 3)
        {
            n -= 3;
            ++res;
        }
        else if (n >= 2)
        {
            n -= 2;
            ++res;
        }
        else
        {
            n -= 1;
            ++res;
        }
    }
    std::cout << res << endl;
}