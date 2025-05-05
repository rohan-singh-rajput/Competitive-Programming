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

    long long int n, b, d;
    std::cin >> n >> b >> d;

    int sum = 0, dtimes = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
        {
            sum += x;
        }

        if (sum > d)
        {
            dtimes++;
            sum = 0;
        }
    }

    cout << dtimes << endl;

    return 0;
}