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

    std::string input, comp_str;
    cin >> input;
    cin >> comp_str;

    bool ok = true;

    if (input.length() != comp_str.length())
    {
        ok = false;
    }

    for (int i = 0; ok && i < input.length(); i++)
    {
        int len = input.length() - i - 1;
        if (input[i] != comp_str[len])
        {
            ok = false;
            break;
        }
        }

    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}