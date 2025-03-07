#include <iostream>
using namespace std;
int main(){
    int i =2;
    double j =3;
    int *iptr=&i;
    double *dptr =&j;
    //iptr = dptr ; // implciity casting doesnt work with pointers 
    iptr =(int*)dptr; // double to int
    dptr =(double*)iptr; // implciity dont work with pointers only explicit works 


    return 0;

}