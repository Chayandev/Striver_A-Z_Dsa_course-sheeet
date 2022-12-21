#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
};
class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
        if(x==1)
        return head_ref->next;
        Node *temp=head_ref;
        for(int i=1;i<x;i++)
          temp=temp->next;
        if(temp->next==NULL){
            temp->prev->next=NULL;
        }  
        else
        {
            temp->prev->next=temp->next;
        }
      return head_ref;
    }
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
int main( ){
int t;
cin>>t;
while(t--){
      int n,data;
      cin>>n;
      struct Node *head=NULL,*root=NULL;
   for(int i=0;i<n;i++){
      cin>>data;
      insert(head,data);
      if(root==NULL)
      root=head;
   }
   head=root;
   int pos;
   cin>>pos;
   Solution ob;
   head=ob.deleteNode(head,pos);
   print(head);
  }
}