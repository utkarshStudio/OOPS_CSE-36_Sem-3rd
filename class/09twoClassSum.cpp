#include<iostream>
using namespace std;
class Example;
class Test{
    int a;
    public:
        void geta(int);
        int sum(Example,Test);
        int getvalue();
};
class Example{
    int b;
    public:
        void getb(int);
        int sum(Example,Test);
};

void Test :: geta(int x){
    a = x;
}

void Example :: getb(int y){
    b = y;
    
}

int Test :: getvalue(){
    return a;
}

int Example:: sum(Example x, Test y){
    return x.b + y.getvalue();
}

int main(){
    Test a;
    Example b;
    int x , y;
    cin>>x>>y;

    a.geta(x);
    b.getb(y);

    cout<< b.sum(b , a);


}