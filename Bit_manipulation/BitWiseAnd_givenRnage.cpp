#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int rangeBitwiseAnd(int left, int right)
      {
            int i = 0;
            while (left != right)
            {
                  i++;
                  left = left >> 1;
                  right = right >> 1;
            }
            return left << i;
      }
};
int main()
{
      int l, r;
      cin >> l >> r;
      Solution ob;
      cout << ob.rangeBitwiseAnd(l, r) << endl;
      return 0;
}