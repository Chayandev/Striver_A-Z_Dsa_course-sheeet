#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *head){
Node *ptr=head;
while(ptr!=NULL){
      cout<<ptr->data<<" ";
      ptr=ptr->next;
 }
}
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node *node=new Node(x);
        //node->data=x;
      //  node->next=NULL;
        if(head==NULL){
           head=node;
       }
       else{
           node->next=head;
           head=node;
       }
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node *node=new Node(x);
        //node->data=x;
        //node->next=NULL;
        if(head==NULL){
           head=node;
       }
       else{
           Node *ptr=head;
           while(ptr->next!=NULL){
               ptr=ptr->next;
           }
           ptr->next=node;
       }
       return head;
    }
    
};

int main( ){
int t;
cin>>t;
while(t--){
      int data,indicator,n;
      cin>>n;
      struct Node *head=NULL;
      for(int i=0;i<n;i++){
            cin>>data;
            cin>>indicator;
            Solution ob;
            
            if(!indicator)
            ob.insertAtBegining(head,data);
            else
            ob.insertAtEnd(head,data);
      }
      print(head);
}

return 0;
}