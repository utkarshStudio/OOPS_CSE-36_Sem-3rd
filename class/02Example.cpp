#include<iostream>
using namespace std;
int n = 10;
int main(){
    int n = 20;

    cout<<n<<"\n"; //Local variable n will be printed
    cout<<::n<<"\n";//Global variable n will be printed-->Using Scope Resolution Operator

    return 0;
}
