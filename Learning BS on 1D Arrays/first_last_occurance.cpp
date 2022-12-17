#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> searchRange(vector<int> &v, int target)
      {
            int l = 0, r = v.size() - 1, mid, f_oc = -1, l_oc = -1, oc;
            vector<int> res;
            if (v.size() == 1)
            {
                  if (v[0] == target)
                  {
                        res.push_back(0);
                        res.push_back(0);
                  }
                  else
                  {
                        res.push_back(f_oc);
                        res.push_back(l_oc);
                  }
                  return res;
            }
            while (l <= r)
            {
                  mid = l + (r - l) / 2;
                  if (v[mid] == target)
                  {
                        oc = mid;
                        if (f_oc == -1)
                              f_oc = oc;
                        else
                              f_oc = min(f_oc, oc);
                        if (mid > 0 && v[mid - 1] == target)
                              r = mid - 1;
                        else
                        {
                              res.push_back(f_oc);
                              break;
                        }
                  }
                  else if (v[mid] > target)
                        r = mid - 1;
                  else
                        l = mid + 1;
            }
            l = 0, r = v.size() - 1;
            while (l <= r)
            {
                  mid = l + (r - l) / 2;
                  if (v[mid] == target)
                  {
                        oc = mid;
                        if (l_oc == -1)
                              l_oc = oc;
                        else
                              l_oc = max(l_oc, oc);
                        if (mid < v.size() - 1 && v[mid + 1] == target)
                              l = mid + 1;
                        else
                        {
                              res.push_back(l_oc);
                              break;
                        }
                  }
                  else if (v[mid] > target)
                        r = mid - 1;
                  else
                        l = mid + 1;
            }
            //  res.push_back(f_oc);
            //  res.push_back(l_oc);
            if (res.size() == 2)
                  return res;
            else
            {
                  res.push_back(f_oc);
                  res.push_back(l_oc);
                  return res;
            }
      }
};
int main()
{
      int n,target;
      cin >> n;
      vector<int> num(n);
      for (int i = 0; i < n;i++)
            cin >> num[i];
      cin >> target;
      Solution ob;
      vector<int> res = ob.searchRange(num, target);
      for (int i = 0; i < res.size();i++)
            cout << res[i] << ' ';
            return 0;
}