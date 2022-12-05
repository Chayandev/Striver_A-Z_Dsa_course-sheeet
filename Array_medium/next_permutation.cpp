#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> nextPermutation(int N, vector<int> &nums)
      {
            int i, indx = -1;
            vector<int> v;
            for (i = nums.size() - 2; i >= 0; i--)
            {
                  if (nums[i] < nums[i + 1])
                  {
                        indx = i;
                        break;
                  }
            }
            if (indx == -1)
            {
                  reverse(nums.begin(), nums.end());
            }
            else
            {
                  for (i = nums.size() - 1; i > indx; i--)
                  {
                        if (nums[indx] < nums[i])
                        {
                              int temp;
                              temp = nums[indx];
                              nums[indx] = nums[i];
                              nums[i] = temp;
                              reverse(nums.begin() + (indx + 1), nums.end());
                              break;
                        }
                  }
            }
            for (i = 0; i < nums.size(); i++)
                  v.push_back(nums[i]);
            return v;
      }
};
void print(vector<int> &v)
{
      int i;
      for (i = 0; i < v.size(); i++)
            cout << v[i] << " ";
}
int main()
{
      int n, i, ele;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.emplace_back(ele);
      }
      Solution ob;
      vector<int> ans = ob.nextPermutation(n, v);
      print(ans);

      return 0;
}