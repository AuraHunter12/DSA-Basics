// LINKED LIST CREATION
#include <iostream> 
using namespace std;

struct node { 

    int data;
    node *next;

    node(int d=0){
        data = d;
        next = NULL;
    }
};

 int main (){
    node *head=new node(10);
    head->next = new node (220);
    head->next->next = new node(390);
    head->next->next->next =new node(100);
 

 // PRINTING THE CREATED LINKED LIST
 while (head!=NULL)
 {
    cout<<head->data<<" ";
   head=head->next; 
 }
 
 node *temp=head;
 while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
 }
 
 }
 
