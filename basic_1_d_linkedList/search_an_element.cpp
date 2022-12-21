#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        Node *ptr=head;
        while(ptr){
            if(ptr->data==key)
            return true;
            ptr=ptr->next;
        }
        return false;
    }
};

int main( ){
int t;
cin>>t;
while(t--){
      int n;
      cin>>n;
   int data,key;
   cin>>data;
 struct Node *head=new Node(data),*tail=head;
 for(int i=0;i<n;i++){
    cin>>data;
    tail->next=new Node(data);
    tail=tail->next;
 }
cin>>key;
Solution ob;
cout<<ob.searchKey(n,head,key)<<endl;
}
return 0;
}