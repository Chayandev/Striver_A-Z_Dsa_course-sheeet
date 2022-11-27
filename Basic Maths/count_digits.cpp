#include <iostream>
using namespace std;
class Solution
{
public:
      int countDigits(int num)
      {
            int temp = num, d_count = 0;
            while (num != 0)
            {
                  if (temp % (num % 10) == 0)
                        d_count++;
                  num /= 10;
            }
            return d_count;
      }
};
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            Solution ob;
            cout << ob.countDigits(n) << endl;
      }
      return 0;
}