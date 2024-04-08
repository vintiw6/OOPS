#include <iostream>
using namespace std;

class addition {
public:  
    int add(int a, int b) {
        return a + b; 
    }
};

int main() {
    addition sum;
    int result = sum.add(3, 5); 

    cout << "The sum of 3 and 5 is: " << result << endl;

    return 0;
}
