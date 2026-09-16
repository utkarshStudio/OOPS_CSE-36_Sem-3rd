#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void sum(Example);
};

void sum(Example obj) {
    cout << "Sum = " << obj.a + obj.b << endl;
}

int main() {
    Example e;

    e.input();
    sum(e);

    return 0;
}