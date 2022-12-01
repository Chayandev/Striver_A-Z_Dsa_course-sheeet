#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int findMaxConsecutiveOnes(vector<int> &nums)
      {
            int i, count = 0, max_ans = INT_MIN;
            for (i = 0; i < nums.size(); i++)
            {
                  if (nums[i] == 1)
                  {
                        count++;
                        max_ans = max(max_ans, count);
                  }
                  else
                        count = 0;
            }
            max_ans = max(count, max_ans);
            return max_ans;
      }
};
int main()
{
      int n, ele, i;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      cout << ob.findMaxConsecutiveOnes(v);
      return 0;
}