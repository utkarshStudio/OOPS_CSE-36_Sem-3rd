#include<iostream>
using namespace std;
class Example{
    int a , b;
    public:
        Example();
        void display();
        void sum();
};
Example::Example(){
    a = 100;
    b = 200;
}
void Example :: sum(){
    cout<<a+b;
}

void Example :: display(){
     cout<<a<<" "<<b<<endl;
}

int main(){

    Example E1;
    E1.display();
    E1.sum();

return 0;

}