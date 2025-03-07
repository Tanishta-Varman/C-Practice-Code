#include <iostream>
#include <string>
using namespace std;

class uni{
    string name;
    int id;
    public :
    virtual void  display(){ // if we dont write the virtual here the o1 will not print the s1 thingy 
        //cout<<"name"<<this->name<<"id"<<this->id<<endl;
        cout<<"welcome frm class uni stud"<<endl;


    }

};
class student : public uni{
    public:
    void display (){
        cout<<"welcome from class studt "<<endl;

    }
   

};

int main(){
    uni *o1;
    uni ob;
    o1=&ob;
    o1->display();
    student * s1;
    student sb1;
    s1=&sb1;
    s1->display();
    //s1=(student*)o1;
    o1=s1; // upcasting // dynamic binding 

    o1->display();
    ob.display();// static binding 
    sb1.display();// static binding 



    return 0;


}
