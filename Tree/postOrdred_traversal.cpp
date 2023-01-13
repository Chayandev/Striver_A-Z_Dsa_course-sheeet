#include <bits/stdc++.h>
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
    vector<int> postorderTraversal(node* root) {
      //recursive way
        if(root==NULL)
        return res;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        res.push_back(root->data);
        return res;
    }
};
//creat a binary tree