#include <iostream>
using namespace std;
class Example 
{
    int a, b;
    public:
    void get(int, int);
    int  suma(Example, Example);
    int  sumb(Example, Example);

};
void Example :: get(int x, int y) 
{
    a = x;
    b = y;
}
int Example :: suma (Example A, Example B)
{
    int S1 = A.a + B.a;
    return S1;
}
int Example :: sumb (Example A, Example B)
{
    int S2 = A.b + B.b;
    return S2;
}


int main() 
{
    Example E1, E2, E3;
    E1.get(10, 20);
    E2.get(10, 20);
   int ans1 = E3.suma(E1, E2);
   int ans2 = E3.sumb(E1, E2);
 cout << ans1 << endl << ans2;
}