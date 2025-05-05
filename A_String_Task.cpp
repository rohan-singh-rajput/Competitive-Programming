#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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

    string input;
    cin >> input;

    vector<char> res;

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    for (long long int i = 0; i < input.length(); i++)
    {
        if (!(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y'))
        {
            res.push_back('.');
            res.push_back(input[i]);
        }
    }

    for (auto it : res)
    {
        cout << it;
    }
    cout << endl;
}