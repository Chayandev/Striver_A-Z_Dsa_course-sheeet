#include<bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  struct ListNode * next;
  ListNode(int x) {
    val= x;
    next = NULL;
  }
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *ptr=head,*head_mid;
        int count=0;
        while(ptr!=NULL){
              count++;
              ptr=ptr->next;
        }
        if(count==1)
        return true;
        if(count%2!=0)
        count=(count/2)+2;
        else
        count=count/2+1;
       ptr=head;
        while(ptr!=NULL){
          if(count==1)
             head_mid=ptr;
             count--;
             ptr=ptr->next;
        }
        ListNode *current=head_mid,*prev=NULL,*next;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head_mid=prev;
        ptr=head;
         while(head_mid!=NULL){
            if(ptr->val!=head_mid->val)
            break;
            ptr=ptr->next;
            head_mid=head_mid->next;
        }
        if(head_mid==NULL)
        return true;
        return false;
    }
};
    ListNode *insert(ListNode *head, int x)  {
       ListNode *node=new ListNode(x);
       if(head==NULL){
           head=node;
       }
       else{
           ListNode *ptr=head;
           while(ptr->next!=NULL){
               ptr=ptr->next;
           }
           ptr->next=node;
       }
       return head;
    }
int main( ){
int n,num;
cin>>n;
ListNode *head=NULL;
for (int i=0;i<n;i++){
  {    cin>>num;
       head=insert(head,num);
  }
}
Solution ob;
  cout<<ob.isPalindrome(head);

return 0;
}