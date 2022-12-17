#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int searchInsert(vector<int> &nums, int target)
      {
            int l = 0, r = nums.size() - 1, mid;
            while (l <= r)
            {
                  mid = (l + r) / 2;
                  if (nums[mid] == target)
                        return mid;
                  else if (nums[mid] < target)
                        l = mid + 1;
                  else
                        r = mid - 1;
            }
            if (r < 0)
                  return 0;
            if (nums[r] < target)
                  return r + 1;
            return r - 1;
      }
};
int main()
{
      int n, i, target;
      cin >> n;
      vector<int> v(n);
      for (i = 0; i < n; i++)
            cin >> v[i];
      cin >> target;
      Solution ob;
      cout << ob.searchInsert(v, target);
      return 0;
}