#include <iostream>
using namespace std;
int size;
class node{
    public:
      int data;
      node* next;
      node* prev;
};
void createDouble(node* p){
    cout<<"enter the size of Double LinkedList";
    cin>>size;
    cout<<"enter the datas";
    p->prev = NULL;
    cin>>p->data;
    node* last=p;
    for(int i=1;i<size;i++){
        node* temp =new node;
        cin>>temp->data;
        last->next = temp;
        temp->prev = last;
        temp->next =NULL;
        last=temp;
    }
}
void displayList(node* p){
    while(p != NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}
int main(){
    node* head = new node;
    createDouble(head);
    displayList(head);
    return 0;
}