#include <algorithm>
#include <iostream>

using namespace std;

typedef vector<int> vi;

int binarySearch(vi arr, int target) {
  int low = 0;
  int high = (int)arr.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
               
    if (arr[mid] == target) {
      return mid;
    } else if (target < arr[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main(void) {
  vi inputVec;
  int vecSize;
  cin >> vecSize;

  while (vecSize--) {
    int inputNum;
    cin >> inputNum;

    inputVec.push_back(inputNum);
  }

  int target;
  cin >> target;

  bool found = binary_search(inputVec.begin(), inputVec.end(), target);

  int resIndex = binarySearch(inputVec, target);

  cout << resIndex << endl;
  
  cout << found << endl;
  return 0;
}