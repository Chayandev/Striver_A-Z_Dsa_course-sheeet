#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
 }
};
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
            Node *slow=head,*fast=head;
        if(head==NULL || head->next==NULL)
            return false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
            }
        return false;
    }
};
void loopHere(Node *head,Node *tail,int pos){
      if(pos==0)
      return ;
      Node *walk=head;
      for(int i=0;i<pos;i++){
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
Solution ob;
if(ob.detectLoop(head))
cout<<"True"<<endl;
else
cout<<"False"<<endl;
return 0;
}