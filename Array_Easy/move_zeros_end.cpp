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
      void moveZeroes(vector<int> &nums)
      {
            int m, i;
            for (i = 0; i < nums.size(); i++)
            {
                  if (nums[i] == 0)
                  {
                        m = i;
                        break;
                  }
            }
            for (i = 0; i < nums.size() - 1; i++)
            {
                  if (nums[i] == 0 && nums[i + 1] != 0)
                  { // m=i;
                        swap(nums, m, i + 1);
                        m++;
                  }
            }
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
      int s, ele, i;
      vector<int> v;
      for (i = 0; i < s; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      ob.moveZeroes(v);
      print(v);
      return 0;
}