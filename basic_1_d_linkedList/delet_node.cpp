#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *ptr=node,*temp;
        while(ptr->next!=NULL){
            temp=ptr;
            int t;
            t=ptr->val;
            ptr->val=ptr->next->val;
            ptr->next->val=t;
            ptr=ptr->next;
        }
        temp->next=NULL;
        
    }
};
int main( ){
//input will be gien a linked list and fuction will be called with a node to delet.
return 0;
}