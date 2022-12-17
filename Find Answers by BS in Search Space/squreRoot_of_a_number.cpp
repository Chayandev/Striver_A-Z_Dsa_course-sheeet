#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      long long int floorSqrt(long long int x)
      {
            // return sqrt(x);
            long long l = 1, r = x, mid, ans;
            while (l <= r)
            {
                  mid = l + (r - l) / 2;
                  if (mid * mid == x)
                        return mid;
                  else if (mid * mid > x)
                        r = mid - 1;
                  else
                  {
                        ans = mid;
                        l = mid + 1;
                  }
            }
            return ans;
      }
};
int main()
{
      long long n;
      cin >> n;
      Solution ob;
      cout << ob.floorSqrt(n) ;
      return 0;
}