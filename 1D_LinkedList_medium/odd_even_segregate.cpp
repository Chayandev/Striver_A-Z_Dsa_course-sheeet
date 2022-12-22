#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution{
public:
    Node* divide(int N, Node *head){
/* This is when all the node are formated such a way that even or odd may be are positioned one after another.
if(head==NULL || head->next==NULL || head->next->next==NULL)
        return head;
        ListNode* odd=head,*even=head->next,*even_head=head->next;
        while(even && even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_head;
        return head;
        */
       This is one type of the varient of the question where the linked list values are not foramted , the ven and odd are places randomly.
    Node *even=NULL,*odd=NULL,*odd_head=NULL,*even_head=NULL,*ptr=head;
    int flag1=0,flag2=0;
    while(ptr){
        if(ptr->data%2==0){
           if(flag1==0){
                even=ptr;
                even_head=even;
                flag1=1;
            }
            else{
              even->next=ptr;
              even=even->next;
            }
        }
        else{
            if(flag2==0){
                odd=ptr;
                odd_head=odd;
                flag2=1;
            }
            else{
                odd->next=ptr;
                odd=odd->next;
            }
        }
        ptr=ptr->next;
    }
    if(even_head==NULL)
    return odd_head;
    if(odd_head==NULL)
    return even_head;
    even->next=odd_head;
    odd->next=NULL;
   return even_head;
   

}
};
void print(Node *head){
      Node *ptr=head;
      while(ptr){
            cout<<ptr->data;
            ptr=ptr->next;
      }
      return ;
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
Node *ans=ob.divide(n,head);
print(head);
return 0;
}