//Aim : To Print the Bio Data od students
#include<iostream>
#include<string>
using namespace std;

class Bio{
    string name , gender , nationality;
    int age;
    public:
    string Name(){
        cout << "Enter Your Name: " << endl;
        cin >> name; 
           }
    
    string Gender(){
        cout << "Enter Your Gender: " << endl;
        cin >> gender;
    }

    int Age(){
        cout << "Enter Your Age: " << endl;
        cin >> age;
    }

    string Nationality(){
        cout << "Enter Your Nationality: " << endl;
        cin >> nationality;
    }
     
    void Display(){
        cout << "Your Name is:" << name << endl;
        cout << "You are a " << gender << endl;
        cout << "Your Age is: " << age << endl;
        cout << "Your nationality: " << nationality << endl;
    } 
    

};
int main(){
  Bio c1;
  c1.Name();
  c1.Gender();
  c1.Age();
  c1.Nationality();
  c1.Display();
  return 0;

}