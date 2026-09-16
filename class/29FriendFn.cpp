#include <iostream>
using namespace std;

class Example {
    string name;
    int amount;

public:
    void get(string name, int amount);
    friend Example total(Example, Example, Example);
    void display(Example);
};

void Example::get(string n, int a) {
    name = n;
    amount = a;
}

Example total(Example E1, Example E2, Example E3) {
    Example s;

    s.amount = E1.amount + E2.amount + E3.amount;

    return s;
}

void Example::display(Example E) {
    cout <<"Total Amount -> "<< E.amount << endl;

    if(E.amount>50000) cout<<"Eligible";
    else cout<<"Not Eligible";
}

int main() {
    Example A, B, C, D;

    A.get("Ram", 20000);
    B.get("Shyam", 30000);
    C.get("Amit", 25000);

    D = total(A, B, C);

    D.display(D);

    return 0;
}