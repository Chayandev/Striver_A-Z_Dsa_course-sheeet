#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int reverse(int x)
      {
            int temp = x;
            long long r_num = 0;
            x = abs(x);
            while (x != 0)
            {
                  r_num = r_num * 10 + (x % 10);
                  x = x / 10;
            }
            if (temp < 0)
                  r_num = -1 * r_num;
            if (r_num >= INT_MIN && r_num <= INT_MAX)
                  return r_num;
            return 0;
      }
};
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            Solution ob;
            cout << ob.reverse(n) << endl;
      }
      return 0;
}
