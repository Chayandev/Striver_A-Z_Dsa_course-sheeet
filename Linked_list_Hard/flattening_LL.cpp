#include<bits/stdc++.h>
using namespace std;
Node *merge(Node *h1,Node*h2){
    Node *head1=h1,*head2=h2,*head=NULL,*temp=NULL;
    while(head1 && head2){
        if(head==NULL){
            if(head1->data>head2->data){
                head=head2;
                temp=head2;
                head2=head2->bottom;
            }
            else{
                head=head1;
                temp=head1;
                head1=head1->bottom;
            }
        }
        else{
             if(head1->data>head2->data){
                temp->bottom=head2;
                temp=temp->bottom;
                head2=head2->bottom;
            } 
            else{
                 temp->bottom=head1;
                temp=temp->bottom;
                head1=head1->bottom;
            }
        }
    }
    while(head1){
         temp->bottom=head1;
         temp=temp->bottom;
         head1=head1->bottom;
    }
    while(head2){
        temp->bottom=head2;
        temp=temp->bottom;
        head2=head2->bottom;
    }
    return head;
}    
Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
    return root;
  Node *ptr=root,*head=root;
  while(ptr->next){
     head=merge(head,ptr->next);
     ptr=ptr->next;
  }
  return head;
}
//other part will be created properly in given problem set.