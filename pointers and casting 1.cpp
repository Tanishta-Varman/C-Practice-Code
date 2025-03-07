#include <iostream>
using namespace std;
class A{
    public:
    int a;


};

class B{
    public:
    int b;

};

int main(){
    A* oa;
    B* ob;
     //oa = ob ; // not supported 
    oa =(A*)ob;
    oa->a=4;
    cout<<"value of a "<<oa->a<<endl ;
    // casting between unrealted classes will not work
    // casting of unrelated class wont work both types wont work 

     return 0;
}