#include <iostream>
using namespace std;
// this is overwriting (below code)
class base{
    public:
    void fun1(){
        cout<<"fun1 from the base"<<endl;

    }
};

class dervived :public base{
    public:
    using base::fun1; // this helps access the fun1 from the base class 
    // when in dervived we call fun1 , when printing we get the derived one than the base one 
    // this is overwriting 
    //void fun1(){
      //  cout<<"fun1 from the dervived class"<<endl;

    //}
    void fun1(int a){
        // this is overloading 
        // it is not calling any of the above fucntions cause even if name is same we dont touhc the first two function 
        cout<<"the value of a is "<<a<<endl;

    }

};

int main(){
    base b;
    dervived d;
    b.fun1();
    d.fun1();
    d.fun1(5);

    return 0;

}