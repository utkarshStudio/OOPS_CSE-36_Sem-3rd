#include<iostream>
using namespace std;

void display(int x = 10){
    cout<<x<<endl;
}

void greet(string name = "Guest",int age = 18){
    cout<<"Hello "<<name<<" ,age : "<<age<<endl;
}

int main(){
    display();
    display(20);
    greet();
    greet("Utkarsh");
    greet("Ansh",21);
} 