#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution
{ 
        private:
    Node *reverse(Node *head){
        Node *curr=head,*prev=NULL,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
        
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
       struct Node *head1,*head2;
       Node *new_head=new Node(0);
       Node *dummy=new_head;
       head1=reverse(first);
       head2=reverse(second);
       int carry=0,sum=0;
      while(head1 || head2 ||carry){
          sum=0;
          if(head1){
              sum+=head1->data;
              head1=head1->next;
          }
          if(head2){
              sum+=head2->data;
              head2=head2->next;
          }
          sum+=carry;
          carry=sum/10;
          Node *node=new Node(sum%10);
          dummy->next=node;
          dummy=dummy->next;
        
      }
        new_head=reverse(new_head->next);
        return new_head;
    } 
};
Node *buildList(int size){
      int num;
Node *head,*tail,*temp;
cin>>num;
head=new Node(num);
tail=head;
for(int i=0;i<size-1;i++){
      cin>>num;
      tail->next=new Node(num);
      tail=tail->next;
}
return head;
}
void print(Node *head){
      Node *ptr=head;
      while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
      }
      cout<<endl;
      return;
}
int main( ){
int n,m;
cin>>n>>m;
Node *head1,*head2;
head1=buildList(n);
head2=buildList(m);
// print(head1);
// print(head2);
Solution ob;
Node *ans=ob.addTwoLists(head1,head2);
print(ans);
return 0;
}