#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool chechkPalindrom(int num)
      {
            if (num < 0)
                  return false;
            string s = to_string(num);
            int i = 0, j = s.size() - 1;
            while (i < j)
            {
                  if (s[i] != s[j])
                        return false;
                  i++;
                  j--;
            }
            return true;
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      if (ob.chechkPalindrom(n))
            cout << "True" << endl;
      else
            cout << "False" << endl;
      return 0;
}