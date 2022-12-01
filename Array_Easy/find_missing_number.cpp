#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int Find_missing(int arr[], int n)
      {
            /*Ver   y common solutionis find sum of first nth terms ans then find the sum of all elements in given array then deduct teh value from the sumof nth terms that will bw answer.*/

            // BitWise operator
            int i, ans = 0;
            for (i = 0; i <= n; i++)
            {
                  if (i < n)
                        ans ^= arr[i] ^ i;

                  else
                  {
                        ans = ans ^ i;
                  }
            }
            return ans;
      }
};
int main()
{
      int n, i;
      cin >> n;
      int *a = new int(n);
      for (i = 0; i < n; i++)
            cin >> a[i];
      Solution ob;
      cout << ob.Find_missing(a, n);
      return 0;
}