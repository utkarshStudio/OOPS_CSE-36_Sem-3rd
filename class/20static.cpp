#include<iostream>
using namespace std;
class Example{
    static int count;
    
    public:
        static void display();
};

int Example :: count = 10;

void Example :: display(){
    cout<<count<<endl;
}

int main(){

    Example :: display();

    // Example E;
    // E.display();
    
    return 0;
}