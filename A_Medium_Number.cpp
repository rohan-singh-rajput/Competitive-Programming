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

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a < b && a > c))
        {
            cout << a << endl;
        }
        else if ((b < a && b > c) || (b > a && b < c))
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}