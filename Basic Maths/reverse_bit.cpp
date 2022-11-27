#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     long long  int revrseBitNumber(int x)
      {
            long long int r_num = 0, lsb;
            int i = 0;
            for (i = 0; i < 32; i++)
            {
                  lsb = x & 1;
                  r_num |= lsb << (31 - i);
                  x = x >> 1;
            }
            return r_num;
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      cout << ob.revrseBitNumber(n) << endl;
      return 0;
}