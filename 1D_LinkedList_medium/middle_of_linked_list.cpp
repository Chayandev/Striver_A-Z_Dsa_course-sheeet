#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
      /* This is simple approch
       int count=0,N=0;
       Node *ptr=(struct Node*)malloc(sizeof(struct Node));
       ptr=head;
       while(ptr!=NULL)
       {
           N++;
           ptr=ptr->next;
       }
       if(N==0)
       return -1;
       if(N==1)
       return head->data;
       else
       { ptr=head;
          while(ptr!=NULL)
               {
                   if(count==N/2)
                   {
                       return ptr->data;
                   }
                   else
                   {
                       count++;
                       ptr=ptr->next;
                   }
                }
      }
        return 0;
        */
//Two poiner approch
Node *slow=head,*fast=head;
while(fast->next!=NULL && fast->next->next!=NULL){
      slow=slow->next;
      fast=fast->next->next;
}
if(fast->next!=NULL)
slow=slow->next;
return slow->data;
    }
};
int main( ){
int t;
cin>>t;
while(t--){
      int n;
      cin>>n;
   int data;
         cin>>data;
 struct Node *head=new Node(data),*tail=head;
 for(int i=1;i<n;i++){
    cin>>data;
    tail->next=new Node(data);
    tail=tail->next;
 }
 Solution ob;
 cout<<ob.getMiddle(head);
}
return 0;
}