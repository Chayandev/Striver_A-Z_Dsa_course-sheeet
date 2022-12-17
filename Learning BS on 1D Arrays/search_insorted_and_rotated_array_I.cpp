#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      int binarySearch(vector<int> &nums, int l, int r, int target)
      {
            int mid;
            while (l <= r)
            {
                  mid = l + (r - l) / 2;
                  if (nums[mid] == target)
                        return mid;
                  else if (target > nums[mid])
                        l = mid + 1;
                  else
                        r = mid - 1;
            }
            return -1;
      }

public:
      int search(vector<int> &nums, int target)
      {
            int l = 0, r = nums.size() - 1;
            int ro, res1, res2;
            while (l < r)
            {
                  if (nums[l] > nums[l + 1])
                  {
                        ro = l;
                        break;
                  }
                  if (nums[r] < nums[r - 1])
                  {
                        ro = r - 1;
                        break;
                  }
                  else
                        l++;
                  r--;
            }
            res1 = binarySearch(nums, 0, ro, target);
            res2 = binarySearch(nums, ro + 1, nums.size() - 1, target);
            if (res1 != -1)
                  return res1;
            if (res2 != -1)
                  return res2;
            return -1;
      }
};
int main()
{
      int n,target;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n;i++)
            cin >> v[i];
      cin >> target;
      Solution ob;
      cout << ob.search(v, target);
      return 0;
}