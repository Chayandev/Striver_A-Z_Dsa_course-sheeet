#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *next;
  node(int x) {
    data = x;
    next = NULL;
  }
};
class Solution
{   
    private:
    struct node *pre_reverse(struct node *head){
        struct node *curr=head,*prev=NULL,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        //cout<<head->data
        return head;
    }
    public:
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL || head->next==NULL)
        return head;
        int count=0;
       struct node *ptr=head,*rev_tail=NULL,*newHead=NULL,*tail,*next_head,*temp;
        while(ptr){
            if(count==k-1){
                if(newHead==NULL){
                   tail=head;
                    next_head=ptr->next;
                    ptr->next=NULL;
                    ptr=next_head;
                    newHead=pre_reverse(head);
                    count=0;
                    continue;
                }
            
                else{
                   temp=next_head;
                    next_head=ptr->next;
                    ptr->next=NULL;
                    ptr=next_head;
                    tail->next=pre_reverse(temp);
                    tail=temp;
                     count=0;
                     continue;
                }
            }
            count++;
            ptr=ptr->next;
        }
       if(count<=k-1)
        tail->next=pre_reverse(next_head);
        return newHead ;
        
    }
};
void print(node *head){
      node *ptr=head;
      while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
      }
      cout<<endl;
      return;
}
int main( ){
int n,num,k;
cin>>n;
node *head,*tail,*temp;
cin>>num;
head=new node(num);
tail=head;
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new node(num);
      tail=tail->next;
}
cin>>k;
Solution ob;
ob.reverse(head,k);
print(head);
return 0;
}