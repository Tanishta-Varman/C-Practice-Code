#include  <iostream>
using namespace std;
class base{
    public:
    int a=2;

};

class derived :public base{
    public:
    int b =3;
    int y= 5;


};

int main(){
    base ob;
    base*obptr =&ob;
    cout<<"the value of a"<<obptr->a<<endl;
    derived od;
    derived* odptr =&od;
   // obptr = odptr ; // UPcasting , it id done implicitly and it is allowed here only cause ofthe upcast , we dont loose any value here 
    // upcast was base to derived 
    cout<<"value of a "<<obptr->a<<endl;
    odptr = (derived*)&obptr; // this si expclit casting // we doing dervived to base 
    // since we are asking the dervived to point only to the base we might loose data 
    cout<<"the vlaue of b and c in dervicevd cls djsdc is "<<odptr->b<<odptr->y<<odptr->a<<endl;
    //cout<< "the value of a from od"<<odptr->a<<endl;
    //cout<<"the vlaue of b and c in dervicevd cls djsdc is "<<odptr->b<<odptr->y<<endl;

    // binding  , static binding  , dynamic binding 
    // during runing time we chnage the binding to dervived class for ob and oo we are binding it to ob and
 





    return 0;
}

// we have two objects from two classes where they are related ob:a and b , we are doing smth and asking object a to point to the object b from teh otehr class ,
// will be loose any data ??? if we do the above 
// we dont loose data 
// if we loose data its downcasting and if we dont its upcasting 