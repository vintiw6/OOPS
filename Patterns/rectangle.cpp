#include<iostream>
using namespace std;

int main(){
    int i , j , row , column ;
    cout<<"Enter The value of Row: \n";
    cin>> row;
    cout<<"Enter The value of Column: \n";
    cin>> column;

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}