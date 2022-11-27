// Find a given number is even or odd.

// Uisng Bit wise And
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//       bool check_even_odd(int n)
//       {
//             if (n & 1)
//                   return true;
//             return false;
//       }
// };
// int main()
// {
//       int n;
//       cin >> n;
//       Solution ob;
//       if (ob.check_even_odd(n))
//             cout << "ODD" << endl;
//       else
//             cout << "EVEN" << endl;
//       return 0;
// }

// Using Left & right Shift operator

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool check_even_odd(int n)
      {
            int num = (n >> 1) << 1;
            if(num==n)
                  return true;
            return false;
      }

};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      if (ob.check_even_odd(n))
            cout << "EVEN" << endl;
      else
            cout << "ODD" << endl;
      return 0;
}