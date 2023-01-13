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
    vector<vector<int>> levelOrder(node* root) {
        vector<vector<int>>res;
        if(root==NULL)
        return res;
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
             node *node=q.front();
              q.pop();
              if(node->left!=NULL)q.push(node->left);
              if(node->right!=NULL)q.push(node->right);
              level.push_back(node->data);
            }
            res.push_back(level);
        }
        return res;
    }
};
//creat a binary tree