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
        int a, b;
        cin >> a >> b;
        int c = abs(-1 * a + b);
        cout << c << endl;
    }

    return 0;
}