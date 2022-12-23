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
    Node* addOne(Node *head) 
    {
       head=reverse(head);
       int carry=0,temp_sum=0;
       Node *ptr=head;
       head->data=head->data+1;
       while(ptr){
           temp_sum=ptr->data+carry;
           if(ptr->next!=NULL)
           ptr->data=(temp_sum)%10;
           else
           ptr->data=ptr->data+carry;
           carry=(temp_sum)/10;
           ptr=ptr->next;
       }
       head=reverse(head);
       return head;
    }
};
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
int n,num;
cin>>n;
Node *head,*tail,*temp;
cin>>num;
head=new Node(num);
tail=head;
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new Node(num);
      tail=tail->next;
}
Solution ob;
Node *ans=ob.addOne(head);
print(head);
return 0;
}