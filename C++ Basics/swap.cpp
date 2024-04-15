#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter Your Numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;

    cout << "Swapped numbers: " << a << " " << b << endl;

    return 0;
}
