#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int smallestDivisor(vector<int> &nums, int threshold)
      {
            int sum = 0, left = 1, right = *max_element(nums.begin(), nums.end()), mid, ans = 0;
            // cout<<right;
            while (left <= right)
            {
                  mid = left + (right - left) / 2;
                  sum = 0;
                  for (int i = 0; i < nums.size(); i++)
                  {

                        if (nums[i] % mid == 0)
                              sum += nums[i] / mid;
                        else
                              sum += (nums[i] / mid) + 1;
                  }
                  // cout<<sum<<endl;
                  // cout<<mid<<endl;
                  if (threshold >= sum)
                  {
                        ans = mid;
                        right = mid - 1;
                  }
                  else
                  {
                        left = mid + 1;
                  }
            }
            return ans;
      }
};
int main()
{
      int n, threshold;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
            cin >> v[i];
      cin >> threshold;
      Solution ob;
      cout << ob.smallestDivisor(v, threshold);
      return 0;
}