
#include <iostream>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        long long sum = 0;
        if(n==0){
            return sum;
        }

        return (n*n*n)+sumOfSeries(n-1);
    }
};
