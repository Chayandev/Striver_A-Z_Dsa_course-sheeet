// check a number is power of 8 or not

// Approch -1

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool check_8_power(int n)
      {
            if (!(n & (n - 1)))
            {
                  int power = log2(n);
                  if (power%3==0)
                        return true;
            }
            return false;
      }
};

int main()
{
      int n;
      cin >> n;
      Solution ob;
      if (ob.check_8_power(n))
            cout << "Yes" << endl;
      else
            cout << "No" << endl;
      return 0;
}

//   Approch-2
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool check_8_power(int n)
      {
            if (!(n & (n - 1)))
            {
                 if(n%7==1)
                        return true;
            }
            return false;
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      if (ob.check_8_power(n))
            cout << "Yes" << endl;
      else
            cout << "No" << endl;
      return 0;
}