#include<iostream>
using namespace std;
class Example{
    int a , b;
    public:
        Example();
        void display();
};
Example::Example(){
    a = 100;
    b = 200;
}
void Example :: display(){
     cout<<a<<" "<<b;
}
int main(){

    Example E1;
    E1.display();

return 0;

}