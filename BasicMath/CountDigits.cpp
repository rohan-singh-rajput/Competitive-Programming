#include<iostream>
#include<cmath>

int countDigits(int num){
    return (int)(log10(num)+1);
}


int main(void)
{
    int num  = 213;
    std::cout<<countDigits(num)<<"\n";
    return 0;
}
