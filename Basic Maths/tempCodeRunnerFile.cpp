#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool checkAmostrong(int n)
      {
            int temp = n, ans = 0;
            while (n != 0)
            {
                  ans += pow((n % 10), 3);
                  cout << n % 10 << endl;
                  n = n / 10;
                  cout << n << endl;
                  cout << ans << endl;
            }

            if (temp == ans)
                  return true;
            return false;
      }
};
int main()
{
      int num;
      cin >> num;
      Solution ob;
      if (ob.checkAmostrong(num))
            cout << "TURE" << endl;
      else
            cout << "FALSE" << endl;
      return 0;
}