#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int arr[n];

  for (int start = 0; start < n; ++start) {
    cin >> arr[start];
  }

  int max1 = arr[0];

  for (int pos = 0; pos < n; ++pos) {
    if (arr[pos] >= max1) {
      max1 = arr[pos];
    }
  }

  // second max elem
  int max2 = INT_MIN;
  bool found = false;

  for (int pos = 0; pos < n; ++pos) {
    if (arr[pos] > max2 && arr[pos] < max1) {
      max2 = arr[pos];
      found = true;
    }
  }

  cout << max1 << endl;
  cout << ((found == true) ? (cout << max2 << endl) : "Not Found")
       << endl;
  cout << max2 << endl;

  return 0;
}
