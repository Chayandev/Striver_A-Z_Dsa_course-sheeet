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
class Solution
{
public:
      void create_tree(node *root0, vector<int> &vec)
      {
            for (int i = 0; i < 3; i++)
            {
                  node *left = newNode(vec[2 * i + 1]);
                  node *right = newNode(vec[2 * i + 2]);
                  if (i == 0)
                  {
                        root0->left = left;
                        root0->right = right;
                  }
                  if (i == 1)
                  {
                        root0->left->left = left;
                        root0->left->right = right;
                  }
                  if (i == 2)
                  {
                        root0->right->left = left;
                        root0->right->right = right;
                  }
            }
      }
};
void  inorderTraversal(node *root){
      if(root==NULL)
            return;
      inorderTraversal(root->left);
      cout << root->data << " ";
      inorderTraversal(root->right);
}
int main()
{
      int size;
      cin >> size;
      vector<int> v(size);
      for (int i = 0; i < size;i++)
            cin >> v[i];
      struct node *root = newNode(v[0]);
      Solution ob;
      ob.create_tree(root, v);
      inorderTraversal(root);
      return 0;
}