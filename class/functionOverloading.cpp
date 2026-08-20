#include<iostream>
using namespace std;
class Overload {
    private:
        int a , b;
    public:
        void getab(int,int);
        void sum();
        int sum(int,int);
        double sum(int,double);  
        float sum(float,float);
};

void Overload::getab(int x,int y) {
            a = x;
            b = y;
        }
void Overload::sum() {
            cout<<"Sum of a and b :"<<a+b<<endl;
        }    
int Overload::sum(int x,int y) {
            return x+y;
        }     
double Overload::sum(int x,double y) {
            return x+y;
        }     
float Overload::sum(float x,float y) {
            return x+y;
        }        
        
int main(){
    int a , b;
    float c , d;
    double e;
    cin>>a>>b>>c>>d>>e;
    Overload obj;
    obj.getab(a,b);
    obj.sum();
    cout<<"Sum of a and b :"<<obj.sum(a,b)<<endl;
    cout<<"Sum of a and b :"<<obj.sum(c,d)<<endl;
    cout<<"Sum of a and b :"<<obj.sum(a,e)<<endl;

    return 0;
}
