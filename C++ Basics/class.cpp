#include <iostream>
using namespace std;
class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "number: " << number << "\n";
        cout << "cost: " << cost << "\n";
    }
};
void item::getdata(int a, float b)
{

    number = a;
    cost = b;
}
int main()
{
    item c;
    cout << "\nObject is c\n";
    c.getdata(100, 99);
    c.putdata();

    item x;
    cout << "Object is x\n";
    c.getdata(199, 100);
    c.putdata();

    return 0;
}