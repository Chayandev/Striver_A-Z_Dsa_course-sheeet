#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};
class Solution
{   public:
    void removeDuplicates(struct Node **head)
    {
        if(*head==NULL || (*head)->next==NULL)
        return ;
       Node *ptr=*head;
        while(ptr!=NULL && ptr->next!=NULL){
            if(ptr->data==ptr->next->data){
                //cout<<ptr->data<<" "<<ptr->next->data<<endl;
                ptr->next=ptr->next->next;
                if(ptr->next)
                ptr->next->prev=ptr;
                //cout<<ptr->next->data<<" "<< ptr->next->next->prev->data<<endl;
            }
            else
            ptr=ptr->next;
        }
     return;
    }
};
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
Solution ob;
ob.removeDuplicates(&head);
print(head);
return 0;
}