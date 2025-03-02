#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

struct Euclidean_Distance
{
    float x1;
    float y1;
    float x2;
    float y2;

};

// lets take input of x and y values 

void ipval(Euclidean_Distance*ed){
    cout<<"value of x1";
    cin>>ed->x1;
    cout<<"the value of y1";
    cin>>ed->y1;
    cout<<"the value of x 2";
    cin>>ed->x2;
    cout<<"the value of y2";
    cin>>ed->y2;

    float c= (ed->x2-ed->x1) *(ed->x2-ed->x1);
    float b =(ed->y2-ed->y1)*(ed->y2-ed->y1);
    float q=c+b;
    float ans=sqrt(q);
    cout<<"the final ans is  "<<ans;



}

    

int main (){
    Euclidean_Distance ed;


    ipval(&ed);
    return 0;



}