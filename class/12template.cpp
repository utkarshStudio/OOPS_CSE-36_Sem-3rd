#include <iostream>
using namespace std;
template< class T>
T display(T a , T b){
    return a + b;
}
int main(){

cout<<display(23,43)<<endl;

cout<<display(34.23,32.22)<<endl;

return 0;

}