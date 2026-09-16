#include<iostream>
using namespace std;
class Student{
    public:
        int marks[5];
};
int main(){
    Student s;
    for(int i = 0 ; i < 5 ; i++){
        cin>>s.marks[i];
    }
    

}