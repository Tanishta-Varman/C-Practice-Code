#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node(int value): data(value), next(nullptr){}
};

class linkedlist{
    private:
    node*head;

    public :
    linkedlist():head(nullptr){}
    void beg(int value){
        node*newnode=new node(value);
        newnode->next=head;
        head=newnode;

    }
    void end(int value){
        node*newnode=new node(value);
        if (head ==nullptr){
            head=newnode;
            return;

        }
        node*current =head;
        while(current->next != nullptr){
            current =current->next;
        }
        current->next =newnode;


    }
    void del(int value){
        if(head==nullptr) return ;

        if (head->data==value){
            node*temp=head;
            head=head->next;
            delete temp;
            return;

        }
        node*current =head;
        while(current->next !=nullptr && current ->next->data != value){
            current=current->next;
                }
                if (current ->next != nullptr){
                    node*temp=current -> next ;
                    current -> next = temp->next;
                    delete temp;
    }
       

    

    void display(){
        node* current =head ;
        cout<<"linked list";
        while(current != nullptr){
            cout<<current->next<<"->";
            current =current->next;
                }
        cout<<"nullptr"<<endl;
        
    }

    ~linkedlist(){
        node*current =head;
        while(current !=nullptr){
            node*next=current->next ;
            delete current ;
            current =next;

        }
    }
};

int main (){
    linkedlist list;
    list.end(10);
    list.end(20);
    list.beg(5);
    list.end(223);
    list.display();
    list.del(20);
    list.display();

    return 0;

}