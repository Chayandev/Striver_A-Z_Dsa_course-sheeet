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
class Solution {
public:
   Node* deleteMiddle(Node* head) {
        struct Node* ptr;
        int count=0,mid;
        ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        if(count==1)
        {
            head=NULL;
            return head;
        }
        else if(count==2)
        {
            head->next=NULL;
            return head;
        }
         else{
            mid=count/2;
            count=0;
            ptr=head;
            while(head->next!=NULL){
                
                if(count==mid-1)
                {
                    
                   head->next=head->next->next;
                   break;
                }
                else{
                 count++;
                 head=head->next;
                }
            }
        }
        return ptr;
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
Node *ans=ob.deleteMiddle(head);
print(head);
return 0;
}