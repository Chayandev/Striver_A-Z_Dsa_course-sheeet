#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
      int data;
    struct ListNode *next;
    ListNode(int x) {
        data = x;
        next = NULL;
 }
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     ListNode *slow=head,*fast=slow;
        if(head==NULL || head->next==NULL)
            return NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {     
                slow=head;
                break;
            }
            
        }
        if(slow!=head)
       return NULL;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};
void loopHere(ListNode *head,ListNode *tail,int pos){
      if(pos==0)
      return ;
      ListNode *walk=head;
      for(int i=0;i<pos;i++){
            walk=walk->next;
            tail->next=walk;
      }
}
int main( ){
int n,num;
cin>>n;
ListNode *head,*tail,*temp;
cin>>num;
head=tail=new ListNode(num);
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new ListNode(num);
      tail=tail->next;
}
int pos;
cin>>pos;
loopHere(head,tail,pos);
Solution ob;
temp=ob.detectCycle(head);
if(temp==NULL)
cout<<"-1"<<endl;
else if(temp==head)
cout<<"0"<<endl;
else{
int count=0;
while(head!=temp){
  head=head->next;
  count++;
}
cout<<count<<endl;
}
return 0;
}
