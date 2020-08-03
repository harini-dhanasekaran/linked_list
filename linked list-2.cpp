                         //swap nodes in linked list without swapping data


#include <iostream>
#include <set>
using namespace std;
class node{
    public:
      int data;
      node* next;
};
void createlist(node* p){
    int size;
    node* last=p;
    cout<<"enter the size of list";
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

                                   //swap nodes all 3 cases

int swapnode(node* p){
    int a,b;
    cout<<"enter the node's data to be swapped ";
    cin>>a>>b;
    if(a==b)
      return 0;
    node *temp,*ap=NULL,*bp=NULL,*a1=p,*b1=p;
    while(a1!=NULL && a1->data!=a){
        ap=a1;
        a1=a1->next;
    }
    while(b1!=NULL && b1->data!=b){
        bp=b1;
        b1=b1->next;
    }
    if(b1==NULL || a1==NULL)
      return 0;
    else{
        temp=b1->next;
        if(ap==NULL)
          p=b1;
        else
          ap->next=b1;
        
        if(bp==NULL)
          p=a1;
        else
            bp->next=a1;

        b1->next=a1->next;
        a1->next=temp;
        displaylist(p);
    }
}



                                //delete a node

void deleteNode(node *&head){
  int pos; 
  cout<<"enter the position to delete node";
  cin>>pos;
  if(pos==1){
    node* temp=head;
    head=head->next;
    delete temp;
  }
  else
  {
    node *tail=NULL,*p=head;
    for(int i=0;i<pos-1 && p;i++){
      tail=p;
      p=p->next;
    }
    tail->next=p->next;
    delete p;
  }
}
bool isSorted(node* p){
  int x=p->data;
  p=p->next;
  while(p!=NULL){
    if(x<=p->data){
        x=p->data;
        p=p->next;
        continue;
    }
    else
     return false;
  }
  return true;
}


                    //remove duplicate nodes 


int removeDuplicate(node* head){
  node *p=head,*q=head->next;
  if(p==NULL){
    cout<<"empty";
    return 0;
  }
  while(q!=NULL){
    set<int> pv;  //previous value
    pv.insert(p->data);
    pv.find(q->data);
  }
  
}
int main(){
    node* head = new node;
    createlist(head);
        // deleteNode(head);
    // displaylist(head);
    // cout<<endl;
    // cout<<isSorted(head);
                // swapnode(head);
    displaylist(head);
    cout<<endl;
    removeDuplicate(head);
    displaylist(head);
    return 0;
}