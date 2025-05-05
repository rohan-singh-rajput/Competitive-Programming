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
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int a, b, i;

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
        arr[a - 1] += b - 1;
        arr[a + 1] += arr[a] - b;
        arr[a] = 0;
    }

    for (int i = 1; i <= sizeof(arr); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}