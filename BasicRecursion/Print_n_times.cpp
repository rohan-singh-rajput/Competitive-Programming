// Print GFG n times

#include <iostream>
using namespace std;

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N==0){
            return;
        }
        cout<<"GFG"<<" ";
        printGfg(N-1);
    }
};
