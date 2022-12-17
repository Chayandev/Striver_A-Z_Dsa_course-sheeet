
/*# Intuition
Uinsg Binary search for every row to find the maximum value.

# Approach
Binary search.

# Complexity
- Time complexity:
TC=O(nlog(m))

- Space complexity:
O(1)

# Code
```
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low,high,mid,i;
        vector<int>res;
        for( i=0;i<mat.size();i++){
            low=0;
            high=mat[i].size();
            while(low<=high){
                mid=low+(high-low)/2;
                int val=mat[i][mid];
                int left=mid>=1?mat[i][mid-1]:-1;
                int right=mid<mat[i].size()-1?mat[i][mid+1]:-1;
                int top=i>=1?mat[i-1][mid]:-1;
                int bottom=i<mat.size()-1?mat[i+1][mid]:-1;

                if(val>=left && val>=right && val>=top && val>=bottom){
                    res.push_back(i);
                    res.push_back(mid);
                    return res;
                }
                else if(left>=right)
                high=mid-1;
                else if(right>left)
                low=mid+1;
                else break;
            }
        }
        return res;
    }
};
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; i++)
        {
            cin >> v[i][j];
        }
      }
    
      Solution ob;
      vector<int> res = ob.findPeakGrid(v);
      for (i = 0; i < res.size();i++){
        cout << res[i] << " ";
      }
        return 0;
}
