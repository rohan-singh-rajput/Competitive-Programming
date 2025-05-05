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

    int m;
    std::cin >> m;
    int n;
    std::cin >> n;

    int i = 1;
    int cnt = 0;

    while (2 * i <= m * n)
    {
        ++cnt;
        i++;
    }

    cout << cnt << endl;
}