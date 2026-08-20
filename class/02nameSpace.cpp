#include<iostream>
using namespace std;

namespace one{
    int x=10;
    void display(){  
        cout<< " This is namespace one function\n";
    }    
}
namespace two{
    int x=5;
    void display(){  
        cout<< " This is namespace two function\n";
    }         
}

void display(){
        cout<< "Main ";
    }    

int main(){
    string x = "CSE-36 ";
    display();
    cout<<x<<endl;
    cout<< one :: x;
    one :: display();
    cout<< two :: x;
    two :: display();
    
    return 0;
}