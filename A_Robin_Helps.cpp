#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int robinGold = 0;
        int peopleGivenGold = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {

                robinGold += a[i];
            }
            else if (a[i] == 0 && robinGold > 0)
            {

                peopleGivenGold++;
                robinGold--;
            }
        }

        cout << peopleGivenGold << endl;
    }

    return 0;
}
