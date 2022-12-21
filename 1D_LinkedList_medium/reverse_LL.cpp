#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
    
    ListNode(int x){
        data = x;
        next = NULL;
    }
    
}; 
class Solution {
      private:
      ListNode* reverse(ListNode*head){
                 if(head->next==NULL || head==NULL)
            return head;
        ListNode *newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
     }
public:
    ListNode* reverseList(ListNode* head) {
        /* Iterative:-----
        ListNode *curr=head,*prev=NULL,*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
        */
       //recursive
         if(head==NULL)
            return head;
        return reverse(head);
    }
};
void print(ListNode *head){
      ListNode *ptr=head;
      while(ptr!=NULL){
            cout<<ptr->next<<' ';
            ptr=ptr->next;
      }
}
int main( ){
int t;
cin>>t;
while(t--){
      int n;
      cin>>n;
   int data;
         cin>>data;
 struct ListNode *head=new ListNode(data),*tail=head;
 for(int i=1;i<n;i++){
    cin>>data;
    tail->next=new ListNode(data);
    tail=tail->next;
 }
 Solution ob;
head=ob.reverseList(head);
print(head);
}
return 0;
}