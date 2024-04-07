#include<iostream>
using namespace std;

int main(){
    int i , j , row , col;
    cout<<"Enter the value of row: \n";
    cin>>row;
    cout<<"Enter the value of column: \n";
    cin>>col;

    for(i=1;i>=row;i++){
        for(j=1;j>=col;j++){
            cout<<" *";
            }
            cout<<"\n";
    } 
}