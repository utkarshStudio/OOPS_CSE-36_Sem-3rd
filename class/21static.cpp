#include <iostream>
using namespace std;

class BankAccount {
    int initialAmt;
    int depositAmt;
    int totalSum;

public:
    void getdata(int, int);
    void total();
    static int totalObj(BankAccount, BankAccount);
};

void BankAccount::getdata(int x, int y) {
    initialAmt = x;
    depositAmt = y;
}

void BankAccount::total() {
    cout << "Total Amount in one Object - ";
    cout << initialAmt + depositAmt << endl;
}

int BankAccount::totalObj(BankAccount x, BankAccount y) {
    int ans = x.initialAmt + x.depositAmt
            + y.initialAmt + y.depositAmt;

    return ans;
}

int main() {
    BankAccount A, B;

    A.getdata(1000, 5000);
    B.getdata(1000, 10000);

    A.total();
    B.total();

    cout << "Total Amount in Bank = "
         << BankAccount::totalObj(A, B);

    return 0;
}