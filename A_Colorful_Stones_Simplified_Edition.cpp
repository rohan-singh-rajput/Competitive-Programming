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

    string pos;
    string liss_pos;
    cin >> pos;
    cin >> liss_pos;
    int cnt = 1;

    for (int i = 0; i < liss_pos.length(); i++)
    {
        if (liss_pos[i] == pos[cnt - 1])
        {
            cnt += 1;
        }
    }

    cout << cnt << endl;
}