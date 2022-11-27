// Remove the last set bit and return the answer.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int remove_lastset_bit(int n)
      {
            return n & (n - 1);
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      cout << ob.remove_lastset_bit(n) << endl;

      return 0;
}