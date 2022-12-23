#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Solution{
      //leetcode Problem:-
      public:
         Node *getIntersectionNode(Node *headA, Node *headB) {
        Node *h1=headA,*h2=headB;
        if(h1==NULL || h2==NULL)
        return NULL;
        while(h1!=h2){
            h1=h1==NULL?headB:h1->next;
            //if(h1 ends early then it will sart again from headB to cover the mismatch distance)
            h2=h2==NULL?headA:h2->next;
        }
        return h1;
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
print(head1);
print(head2);
Solution ob;
// Node *ans=ob. findIntersection(head1,head2);
Node *ans=ob.getIntersectionNode(head1,head2);
// print(ans);
cout<<ans->data<<endl;
return 0;
}