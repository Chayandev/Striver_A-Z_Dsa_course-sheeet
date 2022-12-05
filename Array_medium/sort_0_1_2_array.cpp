#include <bits/stdc++.h>
using namespace std;
class Solution
{

private:
      void swap(vector<int> &v, int idx1, int idx2)
      {
            int temp;
            temp = v[idx1];
            v[idx1] = v[idx2];
            v[idx2] = temp;
      }

public:
      void sortColors(vector<int> &nums)
      {
            // My approch
            /*
            int i, c_zero = 0, c_one = 0, c_two = 0;
            for (i = 0; i < nums.size(); i++)
            {
                  if (nums[i] == 0)
                        c_zero++;
                  else if (nums[i] == 1)
                        c_one++;
                  else
                        c_two++;
            }

            for (i = 0; i < nums.size(); i++)
            {
                  if (c_zero > 0)
                  {
                        nums[i] = 0;
                        c_zero--;
                  }
                  else if (c_one > 0)
                  {
                        nums[i] = 1;
                        c_one--;
                  }
                  else
                        nums[i] = 2;
            }
            */

            //      More Optimal
            int i = 0, mid = 0, h = nums.size() - 1;
            while (mid <= h)
            {
                  if (nums[mid] == 1)
                        mid++;
                  else if (nums[mid] == 0)
                  {
                        swap(nums, i, mid);
                        mid++;
                        i++;
                  }
                  else
                  {
                        swap(nums, mid, h);
                        h--;
                       
                  }
            }
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
      Solution ob;
      ob.sortColors(v);
      for (i = 0; i < v.size(); i++)
            cout << v[i] << " ";
      return 0;
}