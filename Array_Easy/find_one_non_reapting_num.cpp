#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int singleNumber(vector<int> &nums)
      {
            int i, s_num = 0;
            for (i = 0; i < nums.size(); i++)
            {
                  s_num ^= nums[i];
            }
            return s_num;
      }
};
int main()
{
      int n, ele, i;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      cout << ob.singleNumber(v) << endl;
      return 0;
}