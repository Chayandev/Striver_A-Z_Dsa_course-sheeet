#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool isPowerOfTwo(int n)
      {
            if (n == INT_MIN)
                  return false;
            if (n != 0 && (n & (n - 1)) == 0)
                  return true;
            return false;
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      if (ob.isPowerOfTwo(n))
            cout << "TRUE" << endl;
      else
            cout << "FALSE" << endl;
}