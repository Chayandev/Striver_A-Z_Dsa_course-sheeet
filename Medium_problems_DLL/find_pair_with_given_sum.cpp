#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
            vector<pair<int,int>>ans;
        if(head->next==NULL)
        return ans ;
    
        Node *left=head,*right,*ptr=head;
        while(ptr->next){
            ptr=ptr->next;
        }
        right=ptr;
        ptr=head;
        while(left!=NULL && right!=NULL && left->data<right->data){
            if(left->data+right->data==target){
             ans.push_back({left->data,right->data});
             left=left->next;
             right=right->prev;
             //cout<<left->data<<" "<<right->data<<endl;
            }
            else if(target-left->data<=right->data)
              right=right->prev;
            else if(target-left->data>right->data){
                  left=left->next;
              }
        }
        return ans;
    }
};
int main( ){
int n,num;
cin>>n;
cin>>num;
Node *head,*tail;
head=new Node(num);
tail=head;
for(int i=0;i<n-1;i++){
      cin>>num;
      tail->next=new Node(num);
      tail->next->prev=tail;
       tail=tail->next;
       
}
int x;
cin>>x;
Solution ob;
vector<pair<int,int>>ans=ob. findPairsWithGivenSum(head,x);
for (auto it:ans){
      cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}