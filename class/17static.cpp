// #include<iostream>
// using namespace std;
// class Example{
//     public  :
//      static int a;

// };
// int Example :: a = 10;
// int main(){
//     cout<< Example::a <<endl;
//      Example E1;
//      cout << E1.a  << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
class Example{
     static int a;
    public  :
    static void display();
};
void Example :: display(){
    cout << a <<endl;
}
int Example :: a = 10;
int main(){
    Example::display();
    return 0;
}