#include <iostream>
using namespace std;
class boot
{
    int m, n;

public:
    boot(int x, int y)
    {
        m = x;
        n = y;
    }
    void putdata()
    {
        cout << "m=" << m << " " << "n=" << n;
    }
};
int main()
{
    boot a(5, 10);
    a.putdata();
    return 0;
}