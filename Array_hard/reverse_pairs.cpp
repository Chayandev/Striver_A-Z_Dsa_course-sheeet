#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      int merge(vector<int> &arr, int l, int mid, int r)
      {
            vector<int> temp;
            int count = 0, x, y = mid + 1;
            for (x = l; x <= mid; x++)
            {
                  while (y <= r && arr[x] > 2 * (long)(arr[y]))
                        y++;
                  count += y - (mid + 1);
            }
            int i, j, k;
            i = l;
            j = mid + 1;
            k = l;
            while (i <= mid && j <= r)
            {
                  if (arr[i] <= arr[j])
                  {
                        temp.push_back(arr[i++]);
                  }
                  else
                  {
                        temp.push_back(arr[j++]);
                  }
            }
            while (i <= mid)
            {
                  temp.push_back(arr[i++]);
            }
            while (j <= r)
            {
                  temp.push_back(arr[j++]);
            }

            for (int f = l; f <= r; f++)
            {
                  arr[f] = temp[f - l];
            }
            return count;
      }

private:
      int mergeSort(vector<int> &arr, int left, int right)
      {
            int count = 0, mid;
            if (left < right)
            {
                  mid = left + (right - left) / 2;
                  count += mergeSort(arr, left, mid);
                  count += mergeSort(arr, mid + 1, right);
                  count += merge(arr, left, mid, right);
            }
            return count;
      }

public:
      int reversePairs(vector<int> &nums)
      {
            int r_pair;
            r_pair = mergeSort(nums, 0, nums.size() - 1);
            return r_pair;
      }
};
int main()
{
      int n, i;
      cin >> n;
      vector<int> v(n);
      for (i = 0; i < n; i++)
            cin >> v[i];
      Solution ob;
      cout << ob.reversePairs(v);
      return 0;
}