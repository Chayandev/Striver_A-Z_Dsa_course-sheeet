// Here the problem statemnt is , if you find any  0 at any position of 2D matrix then make the  whole row and column  0.

// LeetCode

// TC=O(n*m)
// SC = O(n);
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      void setZeroes(vector<vector<int>> &matrix)
      {
            int i, j, row, col, k;
            vector<pair<int, int>> vp;
            for (i = 0; i < matrix.size(); i++)
            {
                  for (j = 0; j < matrix[i].size(); j++)
                  {
                        if (matrix[i][j] == 0)
                        {
                              vp.push_back({i, j});
                        }
                  }
            }
            for (k = 0; k < vp.size(); k++)
            {
                  i = vp[k].first;
                  j = vp[k].second;
                  for (col = 0; col < matrix[i].size(); col++)
                        matrix[i][col] = 0;
                  for (row = 0; row < matrix.size(); row++)
                        matrix[row][j] = 0;
            }
      }
};
int main()
{
      int n, m, i, j;
      cin >> n >> m;
      vector<vector<int>> v;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; i++)
            {
                  cin >> v[i][j];
            }
      }
      Solution ob;
      ob.setZeroes(v);
      for (i = 0; i < v.size(); i++)
      {
            for (j = 0; j < v[i].size(); j++)
            {
                  cout << v[i][j] << " ";
            }
            cout << endl;
      }
      return 0;
}
*/
// This problem statement is simply diffrent than previous , here the statement is if find found any 0 at any position then make the left,right,up,down postion of the matirx as 0 and the position where 0 is detected , set the value of that postion is sum of all left, right, up ,doen positioned value.

// GFG

// TC=O(m*n)
// SC=O(m*n)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      void MakeZeros(vector<vector<int>> &matrix)
      {
            int i, j, row = -1, col = -1, sum = 0, k;
            vector<pair<int, int>> vp;
            vector<int> Vsum;
            for (i = 0; i < matrix.size(); i++)
            {
                  sum = 0;
                  for (j = 0; j < matrix[i].size(); j++)
                  {
                        sum = 0;
                        if (matrix[i][j] == 0)
                        {
                              vp.push_back({i, j});
                              row = i;
                              col = j;
                              if (row - 1 >= 0)
                              {
                                    sum += matrix[row - 1][col];
                              }
                              if (row + 1 < matrix.size())
                              {
                                    sum += matrix[row + 1][col];
                              }
                              if (col - 1 >= 0)
                              {
                                    sum += matrix[row][col - 1];
                              }
                              if (col + 1 < matrix[row].size())
                              {
                                    sum += matrix[row][col + 1];
                              }
                              Vsum.push_back(sum);
                        }
                  }
            }

            if (vp.size() == 0)
                  return;
            else
            {
                  for (k = 0; k < vp.size(); k++)
                  {
                        row = vp[k].first;
                        col = vp[k].second;

                        if (row - 1 >= 0)
                        {
                              matrix[row - 1][col] = 0;
                        }
                        if (row + 1 < matrix.size())
                        {
                              matrix[row + 1][col] = 0;
                        }
                        if (col - 1 >= 0)
                        {
                              matrix[row][col - 1] = 0;
                        }
                        if (col + 1 < matrix[row].size())
                        {
                              matrix[row][col + 1] = 0;
                        }
                        matrix[row][col] = Vsum[k];
                  }
            }
      }
};
int main()
{
      int n, m, i, j;
      cin >> n >> m;
      vector<vector<int>> v;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; i++)
            {
                  cin >> v[i][j];
            }
      }
      Solution ob;
      ob.MakeZeros(v);
      for (i = 0; i < v.size(); i++)
      {
            for (j = 0; j < v[i].size(); j++)
            {
                  cout << v[i][j] << " ";
            }
            cout << endl;
      }
      return 0;
}