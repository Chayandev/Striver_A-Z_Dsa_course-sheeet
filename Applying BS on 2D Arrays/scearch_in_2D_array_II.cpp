/*When row and column both are sorted in accesding order */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool searchMatrix(vector<vector<int>> &matrix, int target)
      {
            int i, j;
            i = 0, j = matrix[0].size() - 1;
            while (i < matrix.size() && j >= 0)
            {
                  if (matrix[i][j] == target)
                        return true;
                  if (matrix[i][j] < target)
                        i++;
                  else
                        j--;
            }
            return false;
      }
};


int main()
{
      int n, m, i, j, target;
      cin >> n >> m;
      vector<vector<int>> v(n,vector<int>(m));
      int ele;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; i++)
            {
                  cin>>ele;
                  v.push_back(ele);
            }
      }
      cin >> target;
      Solution ob;
      if (ob.searchMatrix(v, target))
            cout << "Present" << endl;
      else
            cout << "Absent" << endl;
      return 0;
}
