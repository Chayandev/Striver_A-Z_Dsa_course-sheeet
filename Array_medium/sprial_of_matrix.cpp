#include <bits/stdc++.h>
using namespace std;

// One process to make sprila form of a matrix.
//Leetcode
/*
class Solution
{
public:
      vector<int> spiralOrder(vector<vector<int>> &matrix)
      {
            int i = 0, j = 0;

            vector<int> ans;
            while (i < matrix.size() - i && j < matrix[i].size() - j)
            {
                  int x = i, y = j;
                  while (y < matrix[i].size() - i)
                  {
                        ans.push_back(matrix[x][y]);
                        y++;
                  }
                  y--;
                  x++;
                  if (x < matrix.size() - j)
                  {
                        while (x < matrix.size() - j)
                        {
                              ans.push_back(matrix[x][y]);
                              x++;
                        }
                        x--;
                        y--;
                        if (y >= j)
                        {
                              while (y >= j)
                              {
                                    ans.push_back(matrix[x][y]);
                                    y--;
                              }
                              x--;
                              y = j;
                              while (x > i && x < matrix.size())
                              {
                                    ans.push_back(matrix[x][y]);
                                    x--;
                              }
                        }
                  }
                  i++;
                  j++;
            }
            return ans;
      }
};
void print(vector<int> &matrix, int n, int m)
{
      int i, k = 0, j;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; j++)
            {
                  cout << matrix[k] << ' ';
                  k++;
            }
            cout << endl;
      }
}
int main()
{
      int n, m, i, j;
      cin >> n >> m;
      vector<vector<int>> v(n,vector<int>(m));
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; j++)
            {
                  cin >> v[i][j];
            }
      }
      Solution ob;
      vector<int> ans = ob.spiralOrder(v);
      print(ans, n, m);
}
*/

//GFG
// To find the given positioned elemnt after make the new spiral form of the matrix.
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
       vector<int>v;
       int left=0,right=m,bottom=n,top=0,direction=1,i,j;
       while(v.size()<n*m){
       switch(direction){
           case 1:
           for(i=left;i<right;i++){
               v.push_back(a[top][i]);
           }
           top++;
           direction=2;
           break;
           
           case 2:
           for(i=top;i<bottom;i++){
               v.push_back(a[i][right-1]);
           }
           right--;
           direction=3;
           break;
           
           case 3:
           for(i=right-1;i>=left;i--){
               v.push_back(a[bottom-1][i]);
           }
           bottom--;
           direction=4;
           break;
           
           case 4:
           for(i=bottom-1;i>=top;i--){
               v.push_back(a[i][left]);
               }
           left++;
           direction=1;
           break;
       }
      }
      return v[k-1];
    }

};
int main()
{
      int n, m, i, j,k;
      cin >> n >> m;
      vector<vector<int>> v(n,vector<int>(m));
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; j++)
            {
                  cin >> v[i][j];
            }
      }
      cin >> k;
      Solution ob;
      cout << ob.findK(v, n, m, k);
      return 0;
}



