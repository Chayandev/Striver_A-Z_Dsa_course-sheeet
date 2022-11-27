#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      int checkXor(int num)
      {
            if (num % 4 == 0)
                  return num;
            if (num % 2 == 0)
                  return num + 1;
            if (num % 3 == 0)
                  return 0;
            if (num % 4 == 1)
                  return 1;
      }

public:
      int BitwiseXor_inGivenrange(int left, int right)
      {
            return checkXor(right) ^ checkXor(left - 1);
      }
};
int main()
{
      int l, r;
      cin >> l >> r;
      Solution ob;
      cout << ob.BitwiseXor_inGivenrange(l, r) << endl;
      return 0;
}