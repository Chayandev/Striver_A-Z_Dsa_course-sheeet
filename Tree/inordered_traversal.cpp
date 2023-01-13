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
vector<int>res;
    vector<int> inorderTraversal(node* root) {
      //reccursive way
        if(root==NULL)
        return res;
        inorderTraversal(root->left);
        res.push_back(root->data);
        inorderTraversal(root->right);
        return res;
    }
};
//creat a binary tree
int main( ){

return 0;
}