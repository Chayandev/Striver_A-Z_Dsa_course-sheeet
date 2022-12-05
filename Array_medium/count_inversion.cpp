#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      long long int merge(long long arr[], long long l, long long mid, long long r)
      {
            long long s1, s2, i, j, inv_cnt = 0;
            s1 = mid - l + 1;
            s2 = r - mid;
            long long arr1[s1], arr2[s2];
            for (int i = 0; i < s1; i++)
                  arr1[i] = arr[l + i];
            for (j = 0; j < s2; j++)
                  arr2[j] = arr[mid + 1 + j];
            long long idx1 = 0, idx2 = 0;
            long long k = l;
            while (idx1 < s1 && idx2 < s2)
            {
                  if (arr1[idx1] <= arr2[idx2])
                  {
                        arr[k] = arr1[idx1];
                        k++;
                        idx1++;
                  }
                  else
                  {
                        arr[k] = arr2[idx2];
                        k++;
                        idx2++;
                        inv_cnt = inv_cnt + (s1 - idx1);
                  }
            }
            while (idx1 < s1)
            {
                  arr[k] = arr1[idx1];
                  k++;
                  idx1++;
            }
            while (idx2 < s2)
            {
                  arr[k] = arr2[idx2];
                  k++;
                  idx2++;
            }
            return inv_cnt;
      }

public:
      long long int mergeSort(long long arr[], long long l, long long r)
      {
            long long inv_cnt = 0;
            long long int mid;
            if (l < r)
            {
                  mid = l + (r - l) / 2;
                  inv_cnt += mergeSort(arr, l, mid);
                  inv_cnt += mergeSort(arr, mid + 1, r);
                  inv_cnt += merge(arr, l, mid, r);
            }
            return inv_cnt;
      }

public:
      // arr[]: Input Array
      // N : Size of the Array arr[]
      // Function to count inversions in the array.
      long long int inversionCount(long long arr[], long long N)
      {
            long long inv_count;
            // long long temp[N];
            inv_count = mergeSort(arr, 0, N - 1);
            return inv_count;
      }
};
int main()
{
      long long n, i;
      cin >> n;
      long long a[n];
      for (i = 0; i < n; i++)
            cin >> a[i];
      Solution ob;
      cout << ob.inversionCount(a, n);
      return 0;
}