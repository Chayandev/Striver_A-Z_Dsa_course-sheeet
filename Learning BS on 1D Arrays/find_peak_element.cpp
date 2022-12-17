#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int findPeakElement(vector<int> &v)
      {
            if (v.size() == 1)
                  return 0;
            int peek, i = 0, j = v.size() - 1, mid;
            while (i <= j)
            {
                  mid = i + (j - i) / 2;
                  if (mid == 0 && v[mid] > v[mid + 1])
                        return mid;
                  if (mid == v.size() - 1 && v[mid] > v[mid - 1])
                        return mid;
                  if (mid > 0 && mid < v.size() - 1 && v[mid] > v[mid - 1] && v[mid] > v[mid + 1])
                        return mid;
                  else if (mid == 0 || (mid > 0 && mid < v.size() - 1 && v[mid] > v[mid - 1] && v[mid] < v[mid + 1]))
                        i = mid + 1;
                  else
                        j = mid - 1;
            }
            return 0;
      }
};
int main()
{
      int n;
      cin >> n;
      vector<int> num(n);
      for (int i = 0; i < n; i++)
      {
            cin >> num[i];
      }
      Solution ob;
      cout << ob.findPeakElement(num);
      return 0;
}