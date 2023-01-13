#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *left;
      struct node *right;
};
struct node *newNode(int data)
{
      struct node *node = (struct node *)malloc(sizeof(struct node));
      node->data = data;
      node->left = NULL;
      node->right = NULL;
      return (node);
}
class Solution {

public:
//vector<int>res;
    vector<int> preorderTraversal(node* root) {
      //recursive way
        /*
        if(root==NULL)
        return res;
        res.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return res;
        */

        //iterative
        // iterative way
        vector<int>res;
        if(root==NULL)
        return res;
        stack<node*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            res.push_back(root->data);
            if(root->right)
            st.push(root->right);
            if(root->left)
            st.push(root->left);
        }
        return res;
    }
    
};

//creat a  binary tree
int main( ){

return 0;
}