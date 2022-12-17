#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int NthRoot(int n, int m)
      {
            int left = 1, right = m, mid;
            while (left <= right)
            {
                  mid = (left + right) / 2;
                  if (pow(mid, n) == m)
                        return mid;
                  else if (pow(mid, n) > m)
                        right = mid - 1;
                  else
                        left = mid + 1;
            }
            return -1;
      }
};

int main()
{
      int n, m;
      cin >> n >> m;
      Solution ob;
      cout << ob.NthRoot(n, m);
      return 0;
}