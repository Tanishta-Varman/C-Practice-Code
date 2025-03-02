#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct emp{
    string name ;
    int id;
    int sal;

};

void ipemp(emp*emps,int count){
    for (int i =0; i<count;i++){
        cout<<"the name";
        cin.ignore();
        getline(cin,emps[i].name);
        cout<<"id ";
        cin>>emps[i].id;
        cout<<"the sal";
        cin>>emps[i].sal;
        }
}
// if we wat the list in acs we can just remoce this bool 
bool comparesal(emp a, emp b){
    return a.sal>b.sal;

}
// now we list all the emps in descending with resp to their sal 
void op(emp*emps, int count ){
    for (int i =0; i<count;i++){
        cout<<" \nthe name "<<emps[i].name;
        cout<<"\nthe id "<<emps[i].id;
        cout<<"\nthe sal "<<emps[i].sal;
    }

}
// sort func sorts in acs form only but sincewe have mentioned the comparesal we get it as desc 

int main (){
    int n=3;
    emp*emps=new emp[n];
    ipemp(emps,n);
    sort(emps, emps+n, comparesal);
    op(emps,n);
    delete[] emps;
    return 0;

}