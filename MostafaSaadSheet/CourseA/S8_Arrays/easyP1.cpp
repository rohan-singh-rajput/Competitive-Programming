// Is Increasing Array
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#define F first
#define S second
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define input(n) std::cin >> n;
#define print(n) std::cout << n << "\n";
#define upper(in) std::transform(in.begin(), in.end(), in.begin(), ::toupper);
#define lower(in) std::transform(in.begin(), in.end(), in.begin(), ::tolower);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
      cin>>arr[i];
    }

    // check if increasing

    for (int i = 1; i < N; i++) {
      if (arr[i - 1] > arr[i]) {
        cout << "Not increasing\n";
        break;
      }
    }


    return 0;
}

