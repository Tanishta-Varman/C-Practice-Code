#include <iostream>
#include <string>

using namespace std;

struct book{
    string name;
    string author;
    float price;

};
// we take the books details as input here 
void ipbook(book *books ,int count){

    for (int i =0; i<count ; i++){
        cout<<"name of books ";
        cin.ignore();
        getline(cin,books[i].name);
        cout<<"author name ";
        cin.ignore();
        getline(cin,books[i].author);
        cout<<"price of ";
        cin>>books[i].price;

        }
}

// we now print out the most expensive books which cost mroe than 500

void price500(book*books, int count, int minprice){
    for (int i =0; i<count ; i++){
        if (books[i].price>minprice){
            cout<<"the name "<< books[i].name << "the author"<<books[i].author<<"the price of the book"<<books[i].price;

        }
    }
}

int main (){
    int n=3;
    book* books=new book[n];
    ipbook(books, n);
    price500(books, n , 500);
    delete[] books;
    return 0;


}