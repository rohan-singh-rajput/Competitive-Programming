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

    long long int n;
    std::cin >> n;
    long long int res = 0;

    int deno[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        res += n / deno[i];

        n = n % deno[i];
    }
    cout << res << endl;
}