#include <iostream>
using namespace std;
class node{
    public:
      int data;
      node* next;
};

void linearList(node* p){
    int size;
    node* last=p;
    cout<<"enter the size of Linearlist";
    cin>>size;
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


void circularList(node* head){
    int size ;
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
    cout<<temp->data<<"->";
    temp=temp->next;
    while(temp !=head ){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"0";
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

int main(){
    node* head = new node;
    circularList(head);
    //linearList(head);
    displayCircularList(head);
    //displaylist(head);
    cout<<endl;
    cout<<isCircularList(head);
    return 0;
}