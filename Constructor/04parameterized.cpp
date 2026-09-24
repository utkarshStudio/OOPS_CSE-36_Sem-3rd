#include<iostream>
using namespace std;
class Example{
    int a , b;
    public:
        Example(int,int);
        void display();
        void swap();
        void sum();
};
Example::Example(int x,int y){
    a = x;
    b = y;
}

void Example :: swap(){
    int temp = a;
    a = b;
    b = temp;
}

void Example :: sum(){
    cout<<a+b<<endl;
}

void Example :: display(){
     cout<<a<<" "<<b<<endl;
}
int main(){

    Example E1 = Example(10,20);
    E1.display();
    E1.sum();

    Example E2 = Example(100,200);
    E2.display();

    E2.swap();
    E2.display();

return 0;

}