#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};
class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        if((*head_ref)==NULL){
            return;
        }
        if((*head_ref)->next==NULL)
        {
            if((*head_ref)->data==x){
                (*head_ref)=NULL;
               return;
            }
            return;
        }
        else{
        struct Node *ptr=*head_ref;
        while(ptr!=NULL){
            if((*head_ref)->data==x){
                (*head_ref)=(*head_ref)->next;
               }
            else if((ptr)->next==NULL && (ptr)->data==x){
                (ptr)->prev->next=NULL;
                break;
            }
            else if((ptr)->data==x){
                (ptr)->prev->next=(ptr)->next;
                (ptr)->next->prev=(ptr)->prev;
            }
            (ptr)=(ptr)->next;
        }
    }
    }
};
// Node* push(Node *head,int val){
//       Node *tail=NULL;
//     Node *node=new Node(val);
//     if(head==NULL)
//     {
//       head=node;
//       tail=node;
//     }
//     else{
//        tail->next=node;
//       node->prev=tail;
//        tail=node;
//        }
//        return head;
// }
void print(Node *head){
      Node *ptr=head;
      while(ptr){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
      }
}
int main( ){
int n,num;
cin>>n;
cin>>num;
Node *head,*tail;
head=new Node(num);
tail=head;
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new Node(num);
      tail->next->prev=tail;
       tail=tail->next;
       
}
int x;
cin>>x;
Solution ob;
ob.deleteAllOccurOfX(&head,x);
print(head);
return 0;
}