#include <iostream>

using namespace std;

bool is_prime(unsigned long long num)
{
    static int i = 2;

    if (num == 0 || num == 1){
        return false;
    }

    if (num == i){
        return true;
    }

    if (num % i == 0){
        return false;
    }

    i++;

    return is_prime(num);
}

int main()
{
    unsigned long long num;
    cin >> num;


    is_prime(num) ? cout << "True\n" : cout << "False\n";
    return 0;
}
