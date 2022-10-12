#include <iostream>
#include <cmath>

using namespace std;

int nsw_prime(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    int a = 1, b = 1;
     
    for(int i = 2; i <= n; i++)
    {
        int c = 2 * b + a;
        a = b;
        b = c;
    }
    return b;
}

// first 20 nws primes
int main()
{
    for (int i = 0; i < 20; i++){
        cout << nsw_prime(i) << endl;
    }

    return 0;
}
