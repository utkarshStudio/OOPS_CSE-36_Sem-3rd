#include <iostream>
using namespace std;
class Example{
    int a;
    public:
        void geta(int);
        int sum(Example,Example);
};
void Example :: geta(int x){
    a = x;
}
int Example :: sum(Example A , Example B){
    int s = A.a + B.a;
    return s;
}
int main(){
    Example E1,E2,E3;
    E1.geta(10);
    E2.geta(20);
    int r = E3.sum(E1,E2);
    cout<<r;
    return 0;
}