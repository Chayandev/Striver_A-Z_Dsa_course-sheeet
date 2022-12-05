#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<vector<int>> merge(vector<vector<int>> &intervals)
      {
            vector<vector<int>> res;
            vector<int> temp;
            sort(intervals.begin(), intervals.end());
            temp.push_back(intervals[0][0]);
            temp.push_back(intervals[0][1]);
            res.push_back(temp);
            int i, j = 0;
            for (i = 1; i < intervals.size(); i++)
            {
                  if ((intervals[i][0] >= res[j][0] && intervals[i][0] <= res[j][1]) || (intervals[i][1] >= res[j][0] && intervals[i][1] <= res[j][1]))
                  {
                        res[j][0] = min(res[j][0], intervals[i][0]);
                        res[j][1] = max(res[j][1], intervals[i][1]);
                  }
                  else
                  {

                        vector<int> temp;
                        temp.push_back(intervals[i][0]);
                        temp.push_back(intervals[i][1]);
                        res.push_back(temp);
                        j++;
                  }
            }
            return res;
      }
};
int main()
{
      int n, x, y, i;
      cin >> n;
      vector<vector<int>> v(n);
      for (i = 0; i < n; i++)
      {
            cin >> x >> y;
            v[i].push_back(x);
            v[i].push_back(y);
      }
      Solution ob;
      vector<vector<int>> ans = ob.merge(v);
      for (i = 0; i < ans.size(); i++)
      {
            if (i == 0)
                  cout << '[';
            cout << '[' << ans[i][0] << ',' << ans[i][1] << ']';
            if (i == ans.size() - 1)
                  cout << ']';
      }
      return 0;
}