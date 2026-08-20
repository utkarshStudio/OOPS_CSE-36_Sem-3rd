#include<Bits/stdc++.h>
using namespace std;
class Student{
    int r;
    string name;
    public:
        void getdata(int,string);
        void display();
};
void Student :: getdata(int R , string n){
    r = R;
    name = n;
}
inline void Student :: display(){
    cout<<r<<" ";
    cout<<name<<endl;
}
int main(){
    int r2[5];
    string n2[5];
    for(int i = 0; i < 5 ;i++){
         cin>>r2[i]>>n2[i];
    }
   
    Student S[5];
    for(int i = 0; i < 5 ;i++){
    S[i].getdata(r2[i],n2[i]);
    S[i].display();
    }

    return 0;

}
