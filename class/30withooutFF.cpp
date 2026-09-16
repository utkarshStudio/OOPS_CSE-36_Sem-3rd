#include <iostream>
using namespace std;
class Example {
    int a;

public:
    void geta(int);
    Example Sum(Example,Example);
    void display(Example);
};

void Example::geta(int x) {
    a = x;
}
Example Example:: Sum(Example E1,Example E2){
    Example s;
    s.a  = E1.a+E2.a;

    return (s);
}
void Example :: display(Example E){
    cout<<E.a<<endl;
}

int main() {
    Example A,B,C,R;
    A.geta(10);
    B.geta(20);
    R = C.Sum(A,B);
    cout<<"Sum : ";
    R.display(R);

    return 0;
}