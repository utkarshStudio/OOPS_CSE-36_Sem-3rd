#include<iostream>
using namespace std;

namespace first{
    int a = 10;
}

namespace second{
    float a = 12.32;
}
namespace start{
    void display(){
        cout<<"I am in display funtion of start namespce\n";
    }
}

int main(){
    string a = "C++";
    cout<< a << endl;
    cout<< first :: a<< endl;
    cout<< second :: a<< endl;
    start :: display();

    return 0;
}