#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << "And this employee number " << count << endl;
    }
};
int employee::count;
int main()
{
    employee e1, e2, e3;

    e1.setData();
    e1.getData();
    e2.setData();
    e2.getData();
    e3.setData();
    e3.getData();
    return 0;
}