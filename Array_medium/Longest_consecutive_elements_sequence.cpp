/*
   TC-O(NlogN)
   SC-O(1)
   Using Sorting
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int longestConsecutive(vector<int> &nums)
      {
            int count = 1, i, max_len = INT_MIN;
            sort(nums.begin(), nums.end());
            for (i = 1; i < nums.size(); i++)
            {
                  if (nums[i] == nums[i - 1])
                        continue;
                  if (nums[i] == nums[i - 1] + 1)
                        count++;
                  else
                  {
                        if (max_len < count)
                              max_len = count;
                        count = 1;
                  }
            }

            if (nums.size() == 0)
                  return 0;
            return max(max_len, count);
      }
};
int main()
{
      int n;
      cin >> n;
      int i, ele;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      cout << ob.longestConsecutive(v) << endl;
      return 0;
}

/*
TC-O(N)
SC-O(N)
Using extra space
*/
class Solution
{
public:
      int longestConsecutive(vector<int> &nums)
      {

            unordered_set<int> set;
            int i, count = 1, max_len = INT_MIN;
            for (i = 0; i < nums.size(); i++)
                  set.insert(nums[i]);
            for (i = 0; i < nums.size(); i++)
            {
                  count = 1;
                  if (set.find(nums[i] - 1) == set.end())
                  {
                        int ele = nums[i] + 1;
                        while (set.find(ele) != set.end())
                        {
                              count++;
                              ele++;
                        }
                  }
                  max_len = max(count, max_len);
            }

            if (nums.size() == 0)
                  return 0;
            return max(max_len, count);
      }
};
int main()
{
      int n;
      cin >> n;
      int i, ele;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      cout << ob.longestConsecutive(v) << endl;
      return 0;
}