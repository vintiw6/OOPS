#include<iostream>
using namespace std;

int main(){
    int i , j , height ;
    cout<<"Enter The value of Height: \n";
    cin>> height;

    for(i=height;i>=0;i--){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}