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
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {

      //approch-1
      //   int zero=0,one=0,two=0;
      //   Node *ptr=head;
      //   while(ptr!=NULL){
      //       if(ptr->data==0)
      //       zero++;
      //       else if(ptr->data==1)
      //       one++;
      //       else
      //       two++;
      //       ptr=ptr->next;
      //   }
      //   ptr=head;
      //   while(ptr!=NULL){
      //       if(zero){
      //           ptr->data=0;
      //           zero--;
      //       }
      //       else if(one){
      //           ptr->data=1;
      //           one--;
      //       }
      //       else{
      //           ptr->data=2;
      //           two--;
      //       }
      //       ptr=ptr->next;
      //   }
      //   return head;
      
      //approch-2
     Node* ptr=head;
        vector<Node*> v;
        while(ptr!=NULL){
            v.push_back(ptr);
            ptr=ptr->next;
        }
        int n=v.size();
        int i=0, j=0, k=n-1;
        while(j<=k){
            if(v[j]->data==0){
                swap(v[j++], v[i++]);
            }else if(v[j]->data==2){
                swap(v[j], v[k--]);
            }else j++;
        }
        for(i=0;i<n;i++){
            if(i==n-1)v[i]->next=NULL;
            else
            v[i]->next=v[i+1];
        }
        return v[0];
      
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
Node *ans=ob.segregate(head);
print(ans);
return 0;
}