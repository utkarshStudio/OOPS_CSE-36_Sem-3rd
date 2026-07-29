#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a; // b is a reference variable to a
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    b=20; // changing the value of b will change the value of a
    cout<<"Value of a after changing b: "<<a<<endl;
    return 0;
}