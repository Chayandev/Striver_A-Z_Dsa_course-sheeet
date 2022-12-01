#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int subarraySum(vector<int> &arr, int k)
      {
            unordered_map<int, int> m;
            // m[0]=1;
            int i, count = 0, sum = 0;
            for (i = 0; i < arr.size(); i++)
            {
                  sum += arr[i];
                  if (sum == k)
                        count++;
                  if (m[sum - k] > 0)
                        count += m[sum - k];
                  m[sum]++;
            }
            return count;
      }
};
int main()
{
      int n, i, ele, k;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      cin >> k;
      Solution ob;
      cout << ob.subarraySum(v, k);
      return 0;
}