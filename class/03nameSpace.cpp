#include<iostream>
using namespace std;

namespace verylongnamespace{
    int x = 100;
}    

namespace first{
    int y = 200;
}
using namespace first;

namespace second{
    int z = 300;
}
using namespace second; 

namespace third{
    int y = 9;
    int z = 11;
}
// using namespace third; // not working

int main(){
    namespace vln = verylongnamespace;
    cout<<vln :: x <<endl;

    cout<<y<<endl;
    cout<<z<<endl;

    cout<<third :: y <<endl;
    cout<<third :: z <<endl;
    return 0;
}