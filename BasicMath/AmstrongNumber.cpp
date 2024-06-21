// Check if a number is Armstrong Number or not
#include<iostream>

using namespace std;

int main(void){
    int num;
    cin>>num;


    int buf = num;
    long res = 0;
    while(buf>0){
        int temp = buf%10;
        res = res+(temp*temp*temp);
        buf = buf/10;
    }

    cout<<(bool)(res==num)<<"\n";

    return 0;
}
