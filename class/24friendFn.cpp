#include <iostream>
using namespace std;

class Test;   // Forward declaration

class Example
{
    int a;

public:
    void geta(int);
    void Adisplay();

    friend int sum(Example, Test);
};

// Definition of geta()
void Example::geta(int x)
{
    a = x;
}

// Definition of Adisplay()
void Example::Adisplay()
{
    cout << "\nThe Value of a : " << a << endl;
}


// Test class
class Test
{
    int b;

public:
    void getb(int);
    void Bdisplay();

    friend int sum(Example, Test);
};

// Definition of getb()
void Test::getb(int x)
{
    b = x;
}

// Definition of Bdisplay()
void Test::Bdisplay()
{
    cout << "\nThe Value of b : " << b << endl;
}


// Friend function
int sum(Example E, Test T)
{
    int s = E.a + T.b;
    return s;
}


int main()
{
    Example E1;

    E1.geta(10);
    E1.Adisplay();

    Test T1;

    T1.getb(20);
    T1.Bdisplay();

    int res = sum(E1, T1);

    cout << "\nSum = " << res << endl;

    return 0;
}