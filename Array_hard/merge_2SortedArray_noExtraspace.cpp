#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      // Function to merge the arrays.
      void merge(long long nums1[], long long nums2[], int n, int m)
      {
            int i = 0, j = 0, k;
            if (m == 0)
                  return;
            i = n - 1;
            j = 0;
            while (i >= 0 && j < m)
            {
                  if (nums1[i] > nums2[j])
                  {
                        int temp;
                        temp = nums1[i];
                        nums1[i] = nums2[j];
                        nums2[j] = temp;
                        i--;
                        j++;
                  }
                  else
                        break;
            }
            sort(nums1, nums1 + n);
            sort(nums2, nums2 + m);
      }
};
int main()
{
      int n, m, i, j;
      cin >> n >> m;
      long long a[n], b[m];
      for (i = 0; i < n;i++)
            cin >> a[i];
      for (i = 0; i < m;i++)
            cin >> b[i];
      Solution ob;
      ob.merge(a, b, n, m);
      for (i = 0; i < n;i++)
            cout << a[i] << " ";
      for (i = 0; i < m;i++)
            cout << b[i] << " ";
            return 0;
}