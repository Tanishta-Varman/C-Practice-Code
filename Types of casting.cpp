// we have to do oop in c++ and we need to include one new concpet finish by next week monday 5 marks new: file handling 
// lib management system , must use oop and file handling , pointer concept in c++ learn on own 300 to 500 lines code 
// last project : web dev start learning :CSS 
// type casting 


// polymorphism important for python also 
#include <iostream>
using namespace std;

int main(){
    int a=5;
    double b =6.6 , c=5.5;
    cout<<"the value of b"<<b<<endl;


    b=a; // int to double  // imlpicit casting 
    b=(double)a; // explicit casting // doing it purposefully 
    cout<<"the value of b"<<b<<endl;
    a=c; // double to int  // imlpicit casting 
    // both are supposed to give a error casue we are making an double we are making it into a int 
    a = (int)c;// explicity casting
    cout<<"value of a"<<a<<endl;


    return 0;

}