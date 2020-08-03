                                    //ll display , revese display , initialization, max ,sum data

#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void createList(node *head){
    int size;
    cout<<"enter the size of data";
    cin>>size;
    cout<<"enter the data";
    int d[size];
    for(int i=0;i<size;i++)
      cin>>d[i];
    node *last;
    head->data =d[0];
    head->next =nullptr;
    last = head;
    for(int i=1;i<size;i++){
        node *temp = new node;

        temp->data =d[i];
        temp->next =nullptr;

        last->next = temp;
        last = temp;
    }
}
void displayr(node *p){
    if(p!=NULL){
        displayr(p->next);
        cout<<p->data<<"->";
    }
}
void display(node *p){
    if(p!=NULL){
        cout<<p->data<<"->";
        display(p->next);
    }
}
int countNode(node *p){
    static int c=0;
    if(p!=NULL){
        countNode(p->next);
        c++;
    }
    return c;
}
                    //use while loop to reduce space compexcity
// int sumList(node *p){
//     int sum=0;
//     while(p!=NULL){
//         sum=sum+p->data;
//         p=p->next;
//     }
//     return sum;
// }

                  // using recursion 
// int sumList(node *p){
//     static int sum=0;
//     if(p!=NULL){
//         sum=p->data+sum;
//         sumList(p->next);
//     }
//     return sum;
// }

// int maxInList(node *p){
//     int max=-32768;            //lowest value a int can have
//     while(p){
//         if(p->data>max)
//           max=p->data;
//         p=p->next;
//     }
//     return max;
// }

                               //using recursion
// int maxInList(node *p){
//     static int max=-32768;
//     if(p->data>max){
//         max=p->data;
//         maxInList(p->next);
//     }
//     return max;
// }

                             //linear search

// node* search(node* p){
//     int num;
//     cout<<"enter th number to search";
//     cin>>num;
//     while(p!=NULL){
//         if(p->data==num)
//           return p;
//         p=p->next;
//     }
//     return NULL;
// }


                     //move to head slight change for transposition


// void search(node* p){
//     int num;
//     node* initail=p;
//     int first;
//     first=initail->data;
//     cout<<"enter th number to search";
//     cin>>num;
//     while(p!=NULL){
//         if(p->data==num){
//             initail->data=p->data;
//             p->data=first;
//             cout<<p;
//         }
         
//         p=p->next;
//     }
//     cout<<NULL;
// } 

                      // to add a new node before head

// node* addhead(node *p){
//     node* temp=new node;
//     cout<<"enter the new data";
//     cin>>temp->data;
//     temp->next=p;
//     return temp;
// }

                  // 


void insert(int pos,int data,node *&head){
    node* it=head;
    if(pos==0){
        node* temp=new node;
        temp->data=data;
        temp->next=head;
        head=temp;
    }
    else{
        for(int i=0;i<pos-1;i++){
            it=it->next;
        }
        node* temp=new node;
        temp->data=data;
        temp->next=it->next;
        it->next=temp;
    }
}
int main() {
    node *head=new node;
    createList(head);
    // display(head);
    // cout<<endl;
    // displayr(head);
    // cout<<endl<<countNode(head);
    // cout<<endl<<sumList(head);
    //cout<<endl<<maxInList(head);
    // cout<<endl;
    // search(head);
    // head=addhead(head);
    // cout<<endl;
    // display(head);

    
    // insert(0,1,head);
    // insert(1,2,head);
    // insert(2,4,head);
    // insert(3,6,head);
    // insert(4,8,head);
    // display(head);
    return 0;
}