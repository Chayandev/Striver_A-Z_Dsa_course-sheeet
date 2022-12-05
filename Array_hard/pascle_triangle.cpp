// This code is for the nth row of the pascle triangle
/*
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      vector<long long> nthRowOfPascalTriangle(int numRow)
      {
            int i, j, n = numRow - 1;
            const unsigned int M = 1000000007;

            vector<vector<long long int>> v(numRow);
            vector<long long> ans;
            for (i = 0; i < numRow; i++)
            {
                  v[i] = vector<long long int>(i + 1);
                  for (j = 0; j <= i; j++)
                  {
                        if (j == 0 || j == i)
                        {
                              v[i][j] = 1;
                        }
                        else
                        {
                              v[i][j] = (v[i - 1][j - 1] + v[i - 1][j]) % M;
                        }
                  }
            }
            for (i = 0; i < numRow; i++)
                  ans.push_back(v[numRow - 1][i]);
            return ans;
      }

      /*
      long long int res=1;
      n=RowNUm-1;
        else we can do
        for(i=0;i<RowNum-1;i++)
        {
        res*=(n-i);
        res/=i+1;
        }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      vector<long long> res = ob.nthRowOfPascalTriangle(n);
      for (int i = 0; i < n; i++)
            cout << res[i] << " ";
      return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
// The bellow code is for the Whole Pascle triangle.

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j;
        vector<vector<int>>v(numRows);
        for(i=0;i<numRows;i++)
        {  v[i] = vector<int>(i+1);
           for(j=0;j<=i;j++)
           {
               if(j==0  || j==i)
               {
                   v[i][j]=1;
               }
               else
               {
                   v[i][j]=v[i-1][j-1]+v[i-1][j];
               }
           }
        }
        return v;
    }
};

int main()
{
      int n;
      cin >> n;
      Solution ob;
      vector<vector<int> > res = ob.generate(n);
      for (int i = 0; i < n; i++)
          {
                cout << "[ ";
                for (int j = 0; j <= i; j++)
                {
                      cout << res[i][j] ;
                      if(i!=j)
                            cout << ",";
                }
                cout << " ]";
          }
                  return 0;
}
