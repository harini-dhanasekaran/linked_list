#include <iostream>
#include <set>
using namespace std;
class node{
    public:
      int data;
      node* next;
};
int size;
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

node* sortMerge(node* head1,node* head2){
    int count;
    set<int> list;
    node *p=head1,*q=head2;
    while(p){
        list.insert(p->data);
        p=p->next;
    }
    while(q){
        list.insert(q->data);
        q=q->next;
    }
    count=list.size();
    node* first=new node;
    node* last=first;
    first->next = NULL;
    for(int i=1;i<count;i++){
        node* temp = new node;
        last->next = temp;
        temp->next =NULL;
        last=temp;
    }
    p=q=first;
    for(auto it=list.begin();it!=list.end();it++)
      {
          q->data=*it;
          q=q->next;
      }
      return p;
}
int main(){
    node* head1=new node;
    linearList(head1);
    node* head2=new node;
    node* result;
    linearList(head2);
    result=sortMerge(head1,head2);
    displaylist(result);
    return 0;
}