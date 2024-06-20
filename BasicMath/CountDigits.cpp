#include<iostream>
#include<cmath>

int countDigits(int num){
    return (int)(log10(num)+1);
}


int main(int argc, char const *argv[])
{
    int num  = 213;
    std::cout<<countDigits(num)<<"\n";
    return 0;
}
