#include <iostream>

using namespace std;

bool is_prime(int num)
{
    if (num <= 1){
        return false;
    }

    if (num == 2 || num == 3){
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0){
        return false;
    }

    for (int i = 5; i < num/2; i+=6){
        if (num % i == 0 || num % (i+2) == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;

    is_prime(num) ? cout << "True\n" : cout << "False\n";
    return 0;
}
