# Project Euler #1: Multiples of 3 and 5

Link To The Question: https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long a = 0;
        long b = 0;
        long d = 0;
        a = (n - 1) / 3;
        b = (n - 1) / 5;
        d = (n - 1) / 15;
        long sum = 3 * a * (a + 1)/2 + 5 * b * (b + 1)/2 - 15 * d * (d + 1)/2;
        cout << sum << endl;
    }
    return 0;
}
