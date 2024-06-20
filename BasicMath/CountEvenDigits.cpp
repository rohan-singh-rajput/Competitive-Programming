// Given a number N. Count the number of digits in N which evenly divide N

#include <bits/stdc++.h>

using namespace std;

int countEvenDigitsDivisble(int n)
{
    int buf_n = n;
    int cnt = 0;

    while (buf_n != 0)
    {
        int digit = buf_n % 10;
        if (digit != 0 && (n % digit == 0))
        {
            ++cnt;
        }

        buf_n = buf_n/ 10;
    }

    return cnt;
}

int main(void)
{
    int N;
    cin >> N;


    cout<<countEvenDigitsDivisble(N)<<"\n";

    return 0;
}