#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      string addBinary(string a, string b)
      {
            int i, j, carry = 0;
            i = a.size() - 1;
            j = b.size() - 1;
            string sum = "";
            while (i >= 0 || j >= 0)
            {
                  if (i >= 0 && j < 0)
                  {
                        sum += ((a[i] - '0') ^ carry) + '0';
                        carry = (a[i] - '0') & carry;
                        i--;
                  }
                  else if (j >= 0 && i < 0)
                  {
                        sum += ((b[j] - '0') ^ carry) + '0';
                        carry = (b[j] - '0') & carry;
                        j--;
                  }
                  else
                  {
                        sum += ((a[i] - '0') ^ (b[j] - '0') ^ carry) + '0';
                        carry = ((a[i] - '0') & (b[j] - '0')) | (carry & ((a[i] - '0') ^ (b[j] - '0')));
                        i--;
                        j--;
                  }
            }

            if (carry)
                  sum += "1";
            reverse(sum.begin(), sum.end());
            return sum;
      }
};
int main()
{
      string a, b;
      cin >> a >> b;
      Solution ob;
      cout << ob.addBinary(a, b) << endl;
      return 0;
}