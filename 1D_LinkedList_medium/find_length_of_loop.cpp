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
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    Node *slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            break;
        }
        
    }
    if(slow!=head)
    return 0;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    Node *temp=slow->next;
    int count=1;
    while(temp!=slow){
        count++;
        temp=temp->next;
    }
    return count;
}
void loopHere(Node *head,Node *tail,int pos){
      if(pos==0)
      return ;
      Node *walk=head;
      for(int i=1;i<pos;i++){
            walk=walk->next;
            tail->next=walk;
      }
}
int main( ){
int n,num;
cin>>n;
Node *head,*tail;
cin>>num;
head=tail=new Node(num);
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new Node(num);
      tail=tail->next;
}
int pos;
cin>>pos;
loopHere(head,tail,pos);

cout<< countNodesinLoop(head)<<endl;
return 0;
}