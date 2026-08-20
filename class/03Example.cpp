#include<iostream>
using namespace std;
class Example {
    private:
        int a , b;
    public:
        void getdata();
        void print();
};
    void Example :: getdata() {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
    void Example :: print(){
            cout<< "The numbers are: " << a << " and " << b << "\n";
        }    

int main(){
    Example obj;
    obj.getdata();
    obj.print();

    return 0;
}
