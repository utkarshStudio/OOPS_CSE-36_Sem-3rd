#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void geta(int);
    void swap(Example, Example);
};

void Example::geta(int x) {
    a = x;
}

void Example::swap(Example A, Example B) {
    int temp;

    temp = A.a;
    A.a = B.a;
    B.a = temp;

    cout<<"First Number : " << A.a << "\nSecond Number :  " << B.a << endl;
}

int main() {
    Example E1, E2;
    int x , y;
    cout<<"Enter First Number : ";
    cin>>x;
    cout<<"Enter Second Number : ";
    cin>>y;
    E1.geta(10);
    E2.geta(20);

    E1.swap(E1, E2);

    return 0;
}