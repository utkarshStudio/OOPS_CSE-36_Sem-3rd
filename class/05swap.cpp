#include<iostream>
using namespace std;

class Example {
    private:
        int a, b;

    public:
        void getdata(int, int);
        void swap();
        void print();
};

void Example :: getdata(int x, int y) {
    a = x;
    b = y;
}

void Example :: swap() {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Example :: print() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    Example obj;

    int a, b;

    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    obj.getdata(a, b);

    cout << "Before swapping:" << endl;
    obj.print();

    obj.swap();

    cout << "After swapping:" << endl;
    obj.print();
    

    return 0;
}