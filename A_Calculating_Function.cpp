#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

long long int func(int n)
{
    long long int sum = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += (-1 * i);
        }
        else
        {
            sum += i;
        }
    }

    return sum;
} // TLE

// better approach
// if n is even = n/2
// else(n-1)/2-n = -(n+1)/2

long long int res(long long int n)
{
    if (n % 2 == 0)
    {
        return (n / 2);
    }
    else
    {
        return (-1) * (n + 1) / 2;
    }
}



int main(void)
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    std::cin >> n;

    cout << res(n) << endl;
}
