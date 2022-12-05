#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      // arr: input array
      // n: size of array
      // Function to find the sum of contiguous subarray with maximum sum.
      long long maxSubarraySum(int arr[], int n)
      {

            long long int max_sum = INT_MIN, i, sum = 0;

            for (i = 0; i < n; i++)
            {
                  if (sum < 0)
                        sum = 0;
                  sum += arr[i];
                  if (max_sum < sum)
                        max_sum = sum;
            }
            return max_sum;
      }
};
int main()
{
      int s, i;
      cin >> s;
      int *arr = new int(s);
      for (i = 0; i < s; i++)
            cin >> arr[i];
      Solution ob;
      cout << ob.maxSubarraySum(arr, s) << endl;
      return 0;
}