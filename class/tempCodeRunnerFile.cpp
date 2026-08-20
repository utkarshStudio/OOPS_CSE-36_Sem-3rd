#include<iostream>
using namespace std;
class Example {
    private:
        int a , b;
    public:
        int n;
        void getdata() {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        void print(){
            cout<< "The numbers are: " << a << " and " << b << "\n";
        }
};

int main(){
    Example obj;
    obj.getdata();
    obj.print();
    Example E;
    E.n = 10;// . is called memeber access operator;
    cout<<E.n<<"\n";
    
    return 0;
}
