#include<iostream>
#include<cstdarg>
using namespace std;
int sum(int size,...){
    int ans;
    va_list list;
    va_start(list,size);
    int sum = 0;
    for(int i = 0; i < size ; i++){
        ans = va_arg(list,int);
        sum += ans;
    }
    return sum;
    va_end(list);
}
int main(){

    cout<<sum(5,12,23,42,1,6);

    return 0;

}