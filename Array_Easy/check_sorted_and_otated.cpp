#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool check(vector<int> &nums)
      {
            int i, pos;
            // for (i = 0; i < nums.size() - 1; i++)
            // {
            //       if (nums[i] > nums[i + 1])
            //             break;
            // }
            // pos = i + 1;
            // reverse(nums.begin(), nums.begin() + pos);
            // reverse(nums.begin() + pos, nums.end());
            // reverse(nums.begin(), nums.end());
            // for (i = 0; i < nums.size() - 1; i++)
            // {
            //       if (nums[i] > nums[i + 1])
            //             return false;
            // }
            int c = 0;
            for (i = 0; i < nums.size();i++)
                    {
                        if(nums[i]>nums[(i+1)%nums.size()])
                              c++;
                              if(c>1)
                                    break;
                    }
                    if(c==1)
                  return true;
                    return false;
      }
};
int main()
{
      int size, ele, i;
      cin >> size;
      vector<int> v;
      for (i = 0; i < size; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      if (ob.check(v))
            cout << "True" << endl;
      else
            cout << "False" << endl;
      return 0;
}