#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
//LinkedList sorted alternatingly
/*
Node *mergeList(Node *h1,Node *h2){
    Node *head=NULL,*temp=NULL;
    while(h1 && h2){
        if(head==NULL){
            if(h1->data>h2->data){
                head=h2;
                temp=h2;
                h2=h2->next;
            }
            else{
                 head=h1;
                temp=h1;
                h1=h1->next;
            }
        }
        else{
            if(h1->data>h2->data){
                temp->next=h2;
                temp=temp->next;
                h2=h2->next;
            }
            else{
                 temp->next=h1;
                temp=temp->next;
                h1=h1->next;
            }
        }
    }
    while(h1){
    temp->next=h1;
    temp=temp->next;
    h1=h1->next;
    }
    while(h2){
    temp->next=h2;
    temp=temp->next;
    h2=h2->next;
    }
    return head;
}
Node *reverse(Node *head){
    if(head==NULL || head->next==NULL)
    return head;
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
void sort(Node **head)
{   if((*head)==NULL || (*head)->next==NULL)
    return;
     Node *odd=*head,*even=(*head)->next,*even_head=even,*odd_head=*head;
     while(even && even->next){
         odd->next=odd->next->next;
         even->next=even->next->next;
         
         odd=odd->next;
         even=even->next;
     }
     even_head=reverse(even_head);
     odd->next=NULL;
    //  printList(even_head);
    //   printList(odd_head);
     *head=mergeList(even_head,odd_head);
     return ;
}

*/
//merge sort
class Solution {
private:
Node *mergeList(Node *h1,Node *h2){
   Node *head=NULL,*temp;
   while(h1 && h2){
       if(head==NULL){
           if(h1->data>h2->data){
               head=h2;
               temp=h2;
               h2=h2->next;
           }
           else{
               head=h1;
               temp=h1;
               h1=h1->next;
           }
       }
       else{
           if(h1->data>h2->data){
               temp->next=h2;
               temp=temp->next;
               h2=h2->next;
           }
           else{
               temp->next=h1;
               temp=temp->next;
               h1=h1->next;
           }
       }
   }
       while(h1){
             temp->next=h1;
             temp=temp->next;
               h1=h1->next;
       }
       while(h2){
            temp->next=h2;
            temp=temp->next;
            h2=h2->next;
       }
       return head;
}
public:
    Node* sortList(Node* head) {
        if(head==NULL || head->next==NULL)
        return head;
        Node *slow=head,*fast=head,*temp=NULL,*h1=NULL,*h2=NULL;
        while(fast && fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        h1=sortList(head);
        h2=sortList(slow);

        return mergeList(h1,h2);

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
int n,num,k;
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
ob.sortList(head);
print(head);
return 0;
}