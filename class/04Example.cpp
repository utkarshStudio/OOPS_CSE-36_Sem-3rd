#include<iostream>
using namespace std;
class Example {
    private:
        int a , b;
        float r;
    public:
        void getdata(int,int,float);
        int print();
        float Area();
};
    void Example :: getdata(int x,int y ,float R) {
            a = x;
            b = y;
            r = R;
        }
    int Example :: print(){
            return a+b;
        }    
    float Example :: Area(){
        return 22*r*r/7;
    }    

int main(){
    Example obj;
    int a , b , r ;
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    cout<<"Enter radius of circle :";
    cin>>r;
    obj.getdata(a,b,r);
    cout<<"Sum of a and b :"<<obj.print()<<endl;
    cout<<"Area of circle :"<<obj.Area()<<endl;

    return 0;
}
