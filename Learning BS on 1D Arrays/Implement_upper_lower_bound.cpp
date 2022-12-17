#include <bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(int v[], int n, int x)
{
      sort(v, v + n);
      int l = 0, r = n - 1, mid, lower_max = -1, upper_min = INT_MAX;
      pair<int, int> p;
      while (l <= r)
      {
            mid = l + (r - l) / 2;
            if (v[mid] == x)
            {
                  p = make_pair(v[mid], v[mid]);
                  return p;
            }
            else if (v[mid] < x)
            {
                  if (v[mid] > lower_max)
                  {
                        lower_max = v[mid];
                        // lower_max_idx=mid;
                  }
                  l = mid + 1;
            }
            else
            {
                  if (v[mid] < upper_min)
                  {
                        upper_min = v[mid];
                  }

                  r = mid - 1;
            }
      }
      if (upper_min == INT_MAX)
            upper_min = -1;
      p = make_pair(lower_max, upper_min);
      return p;
}
int main()
{
      int n, i, x;
      cin >> n;
      int *v = new int(n);
      for (i = 0; i < n; i++)
            cin >> v[i];
      cin >> x;
      pair<int, int> res = getFloorAndCeil(v, n, x);
      cout << res.first << ' ' << res.second << endl;
      return 0;
}