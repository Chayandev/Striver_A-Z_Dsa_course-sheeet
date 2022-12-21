#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};
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
void addNode(Node *head, int pos, int data)
{
   Node *ptr=head;
   while(ptr!=NULL){
       if(pos==0){
           Node *node=new Node(data);
           node->prev=ptr;
           node->next=ptr->next;
           ptr->next=node;
       }
       pos--;
       ptr=ptr->next;
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
      if(root=NULL)
      root=head;
   }
   head=root;
   int pos;
   cin>>pos>>data;
   addNode(head,pos,data);
  print(head);
}
return 0;
}