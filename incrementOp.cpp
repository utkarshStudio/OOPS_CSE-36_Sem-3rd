#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5, b;
    b = ++a + a++;
    cout << a << " " << b << endl;

    int c = 5, d;
    d = c++ + ++c;
    cout << c << " " << d << endl;

    int e = 5, f;
    f = e++ + e + e++;
    cout << e << " " << f << endl;

}