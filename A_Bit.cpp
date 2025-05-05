#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int res = 0;

    while (n--)
    {
        string in;
        cin >> in;

        res = (in[1] == '+') ? ++res : --res;
    }

    cout << res << endl;

    return 0;
}