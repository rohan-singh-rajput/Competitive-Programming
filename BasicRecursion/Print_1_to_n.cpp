#include<iostream>
using namespace std;

 void printNos(int N)
    {
        //Your code here
        if(N==0){
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }
