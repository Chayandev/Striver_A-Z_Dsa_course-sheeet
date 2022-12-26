#include<bits/stdc++.h>
using namespace std;
struct Node {
  int val;
  struct Node *next,*random;
  Node(int x) {
    vald= x;
    next = NULL;
    random=NULL;
  }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
//using extra space TC=O(n) & SC=O(n)
/*
      if(head==NULL)
        return head;
     Node *ptr=head,*temp=new Node(0),*dummy;
       dummy=temp;
       map<Node*,Node*>m;
       while(ptr){
          Node *node=new Node(ptr->val);
          temp->next=node;
          temp=temp->next;
          m[ptr]=temp;
          ptr=ptr->next;
       }
       ptr=head;
       while(ptr){
           if(ptr->random==NULL)
           m[ptr]->random=NULL;
           else{
               m[ptr]->random=m[ptr->random];
           }
           ptr=ptr->next;
       }
       return dummy->next;
       }
       */
    if(head==NULL)
        return head;
       Node *temp=head->next,*ptr=head;
       //dummy=temp_node;
       while(ptr){
           //string the next adress
            Node *node=new Node(ptr->val); //creat a node;
            ptr->next=node;
            node->next=temp;
            ptr=temp;
            if(temp)
            temp=temp->next;
           }
           ptr=head;
       while(ptr){
           if(ptr->random==NULL)
           ptr->next->random=NULL;
           else{
               ptr->next->random=ptr->random->next;
           }
           ptr=ptr->next->next;
       }
       //separation
       Node *pt=head,*dummy=new Node(0),*tem=dummy;
        while(pt){
            tem->next=pt->next;
            tem=tem->next;
            pt->next=tem->next;
            pt=pt->next;
        }
         return dummy->next;

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
// other part will be given properly.....