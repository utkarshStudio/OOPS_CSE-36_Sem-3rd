#include<iostream>
using namespace std;
int add(int x,int y){
        return x+y;
    }
class Example {
    private:
        int a , b;
    public:
        int getdata(int,int);
};
int Example :: getdata(int x,int y) {
            a = x;
            b = y;
            int r = add(a,b);
            return r;
        }

  
int main(){
    Example obj;
    int a , b ;
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    cout<<"Sum of a and b : " << obj.getdata(a,b)<<endl;
    return 0;
}
