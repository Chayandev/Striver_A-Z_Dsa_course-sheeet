

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
class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {
        int count=0;
        Node *ptr=head;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        count=count-n;
        if(count==0){
            head=head->next;
            return head;
        }
        ptr=head;
        while(ptr!=NULL){
            if(count==1){
                ptr->next=ptr->next->next;
                return head;
            }
            count--;
            ptr=ptr->next;
        }
       return NULL;
    }
};
//Find the nth node from the last of the given Linked List.
//Function to find the data of nth node from the end of a linked list.
/*
int getNthFromLast(Node *head, int n)
{
      int count=0;
    Node *ptr=head;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        count=count-n;
        if(count==0){
           return head->data;
        }
        ptr=head;
        while(ptr!=NULL){
            if(count==0){
               return ptr->data;
            }
            count--;
            ptr=ptr->next;
        }
       return -1;
}
*/
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
Node *ans=ob.removeNthFromEnd(head,n);
print(ans);
return 0;
}