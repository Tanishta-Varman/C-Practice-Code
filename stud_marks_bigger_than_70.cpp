#include <iostream>
#include <cstring>
using namespace std;
// 1
// we first create a struct 
struct student {
    string name;
    int rollno;
    int marks;

};

// we now take inputs 

void ipstd(student *ty , int count){
    for (int i =0; i<=count ; i++){
        cout<<"name";
        cin.ignore();
        getline(cin,ty[i].name);
        cout<<"rollno";
        cin>>ty[i].rollno;
        cout<<"marks";
        cin>>ty[i].marks;

    }
}


// now we find the studets who has more than 75 mrks 

void mark75(student *ty , int count , int minmark){
    for (int i=0; i<count ;i++){
        if (ty[i].marks > minmark){
            cout<<"name : "<<ty[i].name;
            cout<<" marks "<<ty[i].marks;

                
        }
    }

}



int main(){
    int n=5;
    student*ty=new student[n];
    ipstd(ty, n);
    mark75(ty, n , 70);
    delete[] ty;
    return 0;

}

