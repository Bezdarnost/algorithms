#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(unsigned long long num)
{
    if (num < 2){
        return false;
    }

    if (num == 2 || num == 3){
        return true;
    }
    
    if (num % 2 == 0 || num % 3 == 0){
        return false;
    }

    for (unsigned long long i = 5; i <= sqrt(num); i+=6){
        if (num % i == 0 || num % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    unsigned long long num;
    cin >> num;

    is_prime(num) ? cout << "True\n" : cout << "False\n";
    return 0;
}
