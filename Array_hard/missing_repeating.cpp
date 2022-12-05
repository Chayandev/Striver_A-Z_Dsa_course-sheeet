/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> find_missing_repeating(int arr[], int n)
      {
            int i;
            vector<int> v;
            for (i = 0; i < n; i++)
            {
                  if (arr[abs(arr[i]) - 1] < 0)
                  {
                        v.push_back(abs(arr[i])); // repeating
                  }
                  else
                  {
                        arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
                  }
            }
            for (i = 0; i < n; i++)
            {
                  if (arr[i] > 0)
                        v.push_back(i + 1); // missing
            }
            return v;
      }
};
int main()
{
      int n, i;
      cin >> n;
      int *arr = new int(n);
      for (i = 0; i < n; i++)
            cin >> arr[i];
      Solution ob;
      vector<int> ans = ob.find_missing_repeating(arr, n);
      for (i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}
*/
// Mathamatical logic
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> find_missing_repeating(int arr[], int n)
      {
            int i;
            vector<int> v;
            long long s, s_s, c_s, c_s_s;
            s = (n * (n + 1)) / 2;
            s_s = (n * (n + 1) * ((2 * n) + 1)) / 6;
            for (i = 0; i < n; i++)
                  s -= arr[i];
            for (i = 0; i < n; i++)
                  s_s -= arr[i] * arr[i];
            int missing, repeating;
            missing = (s + (s_s / s)) / 2;
            repeating = missing - s;
            v.push_back(repeating);
            v.push_back(missing);
            return v;
      }
};
int main()
{
      int n, i;
      cin >> n;
      int *arr = new int(n);
      for (i = 0; i < n; i++)
            cin >> arr[i];
      Solution ob;
      vector<int> ans = ob.find_missing_repeating(arr, n);
      for (i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}
*/

// XOR logic
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int> find_missing_repeating(int arr[], int n)
      {
            int i, xor1 = 0, set_bit;
            vector<int> v;
              /* Get the xor of all array elements */
            for (i = 0; i < n; i++)
                  xor1 ^= arr[i];
             /* XOR the previous result with numbers from 1 to n */
            for (i = 1; i <= n; i++)
                  xor1 ^= i;
          /* Get the rightmost set bit in set_bit_no */
            set_bit = xor1 & ~(xor1 - 1);
            int x = 0, y = 0;
             /* Now divide elements into two sets by comparing a rightmost set bit
       of xor1 with the bit at the same position in each element.
       Also, get XORs of two sets. The two XORs are the output elements.
       The following two for loops serve the purpose */

            for (i = 0; i < n; i++)
            {
                  if (set_bit & arr[i])
                   /* arr[i] belongs to first set */
                  {
                        x ^= arr[i];
                  }
                  else
                  {
                          /* arr[i] belongs to second set */
                        y ^= arr[i];
                  }
            }
            for (i = 1; i <= n; i++)
            {
                  if (set_bit & i)
                  {
                        x ^= i;
                  }
                  else
                  {
                        y ^= i;
                  }
            }
             // NB! numbers can be swapped, maybe do a check ?
            int repeat = 0;
            for (i = 0; i < n; i++)
            {
                  if (arr[i] == x)
                        repeat++;
            }

            if (repeat > 1)
            {
                  v.push_back(y);
                  v.push_back(x);
            }
            else
            {
                  v.push_back(x);
                  v.push_back(y);
            }
            return v;
      }
};
int main()
{
      int n, i;
      cin >> n;
      int *arr = new int(n);
      for (i = 0; i < n; i++)
            cin >> arr[i];
      Solution ob;
      vector<int> ans = ob.find_missing_repeating(arr, n);
      for (i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << " ";
      }

      return 0;
}
