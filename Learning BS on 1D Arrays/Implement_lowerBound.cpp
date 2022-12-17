#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      // Function to find floor of x
      // n: size of vector
      // x: element whose floor is to find
      int findFloor(vector<long long> v, long long n, long long x)
      {
            long long l = 0, r = n - 1, lower_max = INT_MIN, mid, lower_max_idx = -1;
            while (l <= r)
            {
                  mid = l + (r - l) / 2;
                  if (v[mid] == x)
                        return mid;
                  else if (v[mid] < x)
                  {
                        if (v[mid] > lower_max)
                        {
                              lower_max = v[mid];
                              lower_max_idx = mid;
                        }
                        l = mid + 1;
                  }
                  else
                        r = mid - 1;
            }
            return lower_max_idx;
      }
};
int main()
{
      long long int n, i, x;
      cin >> n;
      vector<long long> v(n);
      for (i = 0; i < n; i++)
            cin >> v[i];
      cin >> x;
      Solution ob;
      cout << ob.findFloor(v, n, x);
      return 0;
}