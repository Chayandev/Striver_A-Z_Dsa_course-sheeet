#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> twoSum(vector<int> &nums, int target)
      {
            map<int, int> m;
            vector<int> v;
            int i;
            for (i = 0; i < nums.size(); i++)
            {
                  if (m.find(target - nums[i]) != m.end())
                  {
                        v.push_back(m[target - nums[i]]);
                        v.push_back(i);
                  }
                  else
                        m.insert({nums[i], i});
            }
            return v;
      }
};
int main()
{
      int n, i, ele, targt;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      cin >> targt;
      Solution ob;
      vector<int> ans = ob.twoSum(v, targt);
      for (i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
      return 0;
}