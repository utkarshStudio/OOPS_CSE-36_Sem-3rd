#include<iostream>
using namespace std;
class Example{
    int a , b;
    public:
        Example();
        void display();
        void swap();
};
Example::Example(){
    a = 100;
    b = 200;
}
void Example :: swap(){
    int temp = a;
    a = b;
    b = temp;
}

void Example :: display(){
     cout<<a<<" "<<b<<endl;
}

int main(){

    Example E1;
    E1.display();
    E1.swap();
    E1.display();

return 0;

}