#include <iostream>
using namespace std;

template<typename T, typename... Args>
void display(T first, Args... rest) {
    cout << first << endl;
    display(rest...);
}

// Base case
void display() {
}

int main() {

    display(10, 20.4, "Hello", 'A', true);

    return 0;
}