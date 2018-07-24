// Project Euler #2: Even Fibonacci numbers
// Ling To The Question: https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        long n;
        long sum = 0;

        cin >> n;

        long curr_num = 2;

        while(curr_num<=n)
        {
            sum += curr_num;
            curr_num = (long)floor((pow(((1 + pow(5 , 0.5)) / 2),3) * curr_num + 0.5));
        }

        cout << sum << endl;
    }

    return 0;
}
