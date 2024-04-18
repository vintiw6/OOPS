#include <iostream>
using namespace std;

bool IsPrime(int a)
{
    if (a <= 1)
        return false;

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cout << "Enter Your Number: ";
    cin >> a;
    if (IsPrime(a))
    {
        cout << a << " is a prime number." << endl;
    }
    else
    {
        cout << a << " is not a prime number." << endl;
    }
    return 0;
}
