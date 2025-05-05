#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

// find 3 minimum values

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

    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
    }

    // min 1
    for (int i = 0; i < N; ++i) {
      if (arr[i] < min1) {
        min1 = arr[i];
      }
    }

    // min2
    for (int i = 0; i < N; i++) {
      if (arr[i] < min2 && arr[i] > min1) {
        min2 = arr[i];
      }
    }

    // min3
    for (int i = 0; i < N; i++) {
      if (arr[i] < min3 && arr[i] > min2 && arr[i] > min1) {
        min3 = arr[i];
      }
    }

    cout << min1 << " " << min2 << " " << min3 << " ";
    cout << endl;
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    return 0;
}

