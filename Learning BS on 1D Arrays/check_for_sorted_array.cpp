#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool arraySortedOrNot(int arr[], int n)
      {
            int i;
            for (i = 0; i < n - 1; i++)
            {
                  if (arr[i] > arr[i + 1])
                        return false;
            }
            return true;
      }
};
int main()
{
      int n, i;
      cin >> n;
      int *v = new int(n);
      for (i = 0; i < n; i++)
            cin >> v[i];
      Solution ob;
      cout << ob.arraySortedOrNot(v, n);
      return 0;
}