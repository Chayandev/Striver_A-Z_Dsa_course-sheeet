#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
Node* reverseDLL(Node * head)
{
    Node *current=head,*prev,*next,*temp;
    while(current){
       temp=current;
       next=current->next;
       prev=current->prev;
       current->next=prev;
       current->prev=next;
       current=next;
     }
     return temp;
}
Node *insert(Node *head,int x){
      if(head==NULL){
            return new Node(x);
      }
      else{
            Node *n=new Node(x);
            head->next=n;
            n->prev=head;
            head=n;
            return head;
      }
}
void print(Node *head){
      while(head!=NULL){
            cout<<head->data<< " ";
            head=head->next;
      }
}
int main( ){
int t;
cin>>t;
while(t--){
      int n,data;
      cin>>n;
      struct Node *head=NULL,*root=NULL;
   for(int i=0;i<n;i++){
      cin>>data;
      head=insert(head,data);
      if(root==NULL)
      root=head;
}
head=root;
    head= reverseDLL(head);
   print(head);
  }
}
