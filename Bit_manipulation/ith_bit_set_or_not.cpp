// Check ith bit set or not
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool check_set_or_not(int n,int k)
      {
            int mask = 1 << k;
            if(n&mask)
                  return true;
            return false;
      }
};
int main()
{
      int n,k;
      cin >> n>>k;
      Solution ob;
      if (ob.check_set_or_not(n,k-1))
            cout << "SET" << endl;
      else
            cout << "NOT SET" << endl;

      return 0;
}