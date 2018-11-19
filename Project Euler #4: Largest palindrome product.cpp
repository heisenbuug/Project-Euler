#include <iostream>

using namespace std;

bool checkPalen(int z)
{
    int t = 0;
    int temp = z;
    while(z > 0)
    {
        t = (t * 10) + (z % 10);
        z = z /10;
    }
    if(t == temp)
        return true;
    else
        return false;
}

int step(int N-1)
{
    if(checkPalen(N) == 1)
        return N;
    else
        return step(N - 1);
}

int foo(int N)
{
    int z = step(N);
    int i = 999;


    while(i > 0){
        if((z % i == 0) && (z/i) > 100 && (z/i) < 1000){
            return z;
        }
        i--;
    }

    return foo(z-1);
    return 0;
}

int main()
{
    int T;
    int n;

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        cout << foo(n) << endl;
    }
    return 0;
}
