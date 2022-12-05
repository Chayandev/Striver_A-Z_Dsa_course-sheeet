#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
// AntiClockWise rotation.

      // Function to rotate matrix anticlockwise by 90 degrees.
      void rotate_antiClockWise(vector<vector<int>> &matrix)
      {
            int i, j;
            // reverse all the row in the matrix.
            for (i = 0; i < matrix.size(); i++)
            {
                  reverse(matrix[i].begin(), matrix[i].end());
            }
            // Find the transpose of the matrix.
            for (i = 0; i < matrix.size(); i++)
            {
                  for (j = 0; j < i; j++)
                  {
                        swap(matrix[i][j], matrix[j][i]);
                  }
            }
        }
      public:
            // ClockWise rotation
            void rotate_clockWise(vector<vector<int>> & matrix)
            {
                  int i, j;
                  // find transpose of the matirx given
                  for (i = 0; i < matrix.size(); i++)
                  {
                        for (j = 0; j < i; j++)
                        {
                              swap(matrix[i][j], matrix[j][i]); // swap the elements which are eligible fto be swaped.
                        }
                  }
                  // reverse every row the transposed matrix
                  for (i = 0; i < matrix.size(); i++)
                  {
                        reverse(matrix[i].begin(), matrix[i].end());
                  }
            }
      };
      void print(vector<vector<int>> &matrix)
      {
            int i, j;
            for (i = 0; i < matrix.size(); i++)
            {
                  for (j = 0; j < matrix[i].size(); j++)
                  {
                        cout << matrix[i][j];
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
            //Rotation for ClockWise
            ob.rotate_clockWise(v);
            print(v);
         
            // Rotation for Anti clock Wise
            /*
            ob.rotate_antiClockWise(v);
            print(v);
            */
            return 0;
      }