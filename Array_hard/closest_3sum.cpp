#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int closest3Sum(int arr[], int N, int x)
      {
            int i, j, sum = 0, min_sum = INT_MAX, max_sum = INT_MIN, low, high;
            sort(arr, arr + N);
            for (i = 0; i < N;i++)
                  cout << arr[i] << " ";
                  for (i = 0; i < N - 2; i++)
                  {
                        low = i + 1, high = N - 1;
                        while (low < high)
                        {
                              sum = arr[i] + arr[low] + arr[high];
                              if (sum == x)
                                    return x;
                              else if (sum < x)
                              {
                                    if (max_sum < sum)
                                          max_sum = sum;
                                    cout << max_sum << endl;
                                    low++;
                              }
                              else
                              {
                                    if (min_sum > sum)
                                          min_sum = sum;
                                          cout << min_sum << endl;
                                    high--;
                              }
                        }
                  }
                        cout << min_sum << " " << max_sum << endl;
                        if (abs(x - min_sum) <= abs(x - max_sum))
                              return min_sum;
                        return max_sum;
                  
      }
};

int main()
{
      int n, x;
      cin >> n;
      int *a = new int(n);
      for (int i = 0; i < n; i++)
            cin >> a[i];
      cin >> x;
      Solution ob;
      cout << ob.closest3Sum(a, n, x);
      return 0;
}