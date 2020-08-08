#include <iostream>
using namespace std;
int size;
class node{
    public:
      int data;
      node* next;
};
                                                              //linearList
void linearList(node* p){
    node* last=p;
    cout<<"enter the size of Linearlist";
    cin>>::size;
    cout<<"enter the data";
    cin>>p->data;
    p->next = NULL;
    for(int i=1;i<size;i++){
        node* temp = new node;
        cin>>temp->data;
        last->next = temp;
        temp->next =NULL;
        last=temp;
    }
}

void displaylist(node* p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<NULL;
}
                                                      //circularList

void circularList(node* head){
    cout<<"enter the size of Circularlist";
    cin>>size;
    cout<<"enter the datas";
    cin>>head->data;
    head->next=NULL;
    node* last=head;
    for(int i=1;i<size;i++){
        node* temp=new node;

        cin>>temp->data;
        last->next=temp;

        temp->next=head;
        last=temp;
    }
}

void displayCircularList(node* head){
    node* temp=head;
    static int flag=0;
    while(temp !=head || flag==0 ){
        flag=1;
        cout<<temp->data<<"->";
        temp=temp->next;         //we can use recursive here but head must be accessible both outside and inside 
    }
    flag=0;
}

bool isCircularList(node * head){
  node *p=head,*q=head->next->next;
  while(p!=NULL && q!=NULL && q->next!=NULL){
    if(p==q)
      return true;
    else{
      p=p->next;
      q=q->next->next;
    }
  }
  cout<<"good";
  return false;
}

void insertCircular(node* &head){
    int pos;
    cout<<"enter the position at which the node to be inserted";
    cin>>pos;
    node *temp=new node;
    cout<<"enter the data of new node";
    cin>>temp->data;
    if(pos==0){
        node* p=head->next;
        while(p->next !=head){
            p=p->next;
        }
        temp->next =p->next;
        p->next=temp;
        head=temp;
    }
    else{
        node* p=head;
        while(--pos){
            p=p->next;
        }
        temp->next =p->next;
        p->next=temp;
    }
    
}

void deleteCirularNode(node *head){
    if(size==1){
        delete head;
        cout<<0;
    }
    node *p=head,*q=NULL;
    int pos;
    cout<<"enter the data that has to be deleted";
    cin>>pos;
    while(p->data !=pos){
        q=p;
        p=p->next;
    }
    q->next =p->next;
    delete p;
}
void reverseCircularList(node* &head){
    node* p=head;
        while(p->next!= head){
            p=p->next;
        }
        head=p;
}

int main(){
    int size;
    node* head = new node;
    circularList(head);
    //linearList(head);
    displayCircularList(head);
    //displaylist(head);
    cout<<endl;
    //cout<<isCircularList(head);
    //insertCircular(head);
    //deleteCirularNode(head);
    reverseCircularList(head);
      cout<<endl;
    displayCircularList(head);
    return 0;
}


                                                       //function
/*
linearList            -    to create a linearList
displaylist           -    to display linearList
circularList          -    to create a circularList
displayCircularList   -    to display circularList
isCircularList        -    to check if a given linked list is linear or circular
insertCircular        -    to insert in a circular linked list
deleteCirularNode     -    to delete a node in circularList
reverseCircularList   -    to reverse a circular linked list

*/
