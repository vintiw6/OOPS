#include<iostream>
using namespace std;

int main(){
    int i , j , k , height ;
    cout<<"Enter The value of Height: \n";
    cin>> height;

    for(i=0; i<= height; i++){
        for(j= height-i; j>0 ; j--){
            cout<<" ";
        }
        for(k=0;k<=i;k++){
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}