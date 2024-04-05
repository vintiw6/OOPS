#include<iostream>
using namespace std;

int main(){
    int a , b ;
    cout << "Enter Your Number: ";
    cin >> a >> b ;
    if(a > b){
        cout << "a greater than b";
    } else if (a == b){
        cout << "a equal to b";
    } else(a < b){
        cout << "a smaller than b";    
    }
      return 0;
}
