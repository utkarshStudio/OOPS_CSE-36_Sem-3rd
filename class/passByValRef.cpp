// #include <iostream>
// using namespace std;

// void swapValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 10, y = 20;

//     swapValue(x, y);

//     cout << x << " " << y;
//     return 0;
// }

#include <iostream>
using namespace std;

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    swapReference(x, y);

    cout << x << " " << y;
    return 0;
}