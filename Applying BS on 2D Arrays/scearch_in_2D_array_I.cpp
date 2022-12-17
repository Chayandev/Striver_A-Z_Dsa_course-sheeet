// When only row is sotred of 2D matirx and rhe first element of each row is greater then the previous row last element
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      bool binarySearch(vector<vector<int>> &matrix, int s, int e, int target)
      {
            int row, col, colsize;
            colsize = matrix[0].size();
            while (s <= e)
            {
                  int mid = s + (e - s) / 2;
                  row = mid / colsize;
                  col = mid % colsize;
                  if (matrix[row][col] == target)
                        return true;
                  else if (matrix[row][col] > target)
                        e = mid - 1;
                  else
                        s = mid + 1;
            }
            return false;
      }

public:
      bool searchMatrix(vector<vector<int>> &matrix, int target)
      {
            int row = 0, i, j;
            /*
            TC-O(n*m)(worst case)
            SC-O(1)
          //   if(target<matrix[0][0] || target>matrix[matrix.size()-1][matrix[matrix.size()-1].size()-1])
          //       return false;
          //   while(row<matrix.size()){
          //       if(target>=matrix[row][0] && target<=matrix[row][matrix[row].size()-1])
          //       {
          //            for(i=0;i<matrix[row].size();i++){
          //            if(target==matrix[row][i])
          //           return true;
          //       }
          //   }
          //   row++;
          //  }
          // return false;
          */
            int s = 0, e = (matrix.size() * matrix[0].size()) - 1;
            if (binarySearch(matrix, s, e, target))
                  return true;
            return false;
      }
};
int main()
{
      int n, m, i, j, target;
      cin >> n >> m;
      vector<vector<int>> v(n,vector<int>(m));
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; i++)
            {
                  cin >> v[i][j];
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