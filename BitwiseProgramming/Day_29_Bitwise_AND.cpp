#include<iostream>



using namespace std;


int main(void) {
  int T;
  cin >> T;

  while (T--) {
    int n, k;
    cin >> n >> k;
    int res = 0;

    for (int i = 1; i <= n; i++) {
      for (int j = i+1; j <= n; j++) {
        int temp_and = (i & j);

        if (res < temp_and && temp_and < k) {
          res = temp_and;
        }
      }
    }

    cout<<res<<endl;
  }

  

  return 0;
}