#include<iostream>
using namespace std;
class Example{
     static int a;
     int n = 100;
    public :
    static void display();
    void getn();
                 
};

int Example :: a = 10;

void Example :: display(){
    cout << a <<endl;
}

void Example :: getn(){
    cout<< n <<endl;
}

int main(){
    Example::display();
    Example E1;
    E1.getn();
    return 0;
}

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
