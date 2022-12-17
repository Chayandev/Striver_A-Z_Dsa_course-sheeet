#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int search(vector<int> &nums, int target)
      {
            int left = 0, right = nums.size() - 1, mid;
            while (left <= right)
            {
                  mid = (left + right) / 2;
                  if (nums[mid] == target)
                        return mid;
                  else if (target > nums[mid])
                        left = mid + 1;
                  else
                        right = mid - 1;
            }
            return -1;
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
      cout << ob.search(v, target);
      return 0;
}