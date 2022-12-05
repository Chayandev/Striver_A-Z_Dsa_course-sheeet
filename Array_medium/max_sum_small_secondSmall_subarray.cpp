#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      long long pairWithMaxSum(long long arr[], long long N)
      {
            long long small = min(arr[0], arr[1]);
            long long s_small = max(arr[0], arr[1]);
            long long max_sum = small + s_small;
            long long sum = 0;
            int i;
            for (i = 2; i < N; i++)
            {
                  if (arr[i] >= s_small)
                  {
                        small = arr[i - 1];
                        s_small = arr[i];
                        sum = small + s_small;
                  }
                  else if (arr[i] >= small && arr[i] <= s_small)
                  {
                        small = arr[i];
                        s_small = arr[i - 1];
                        sum = small + s_small;
                  }
                  if (max_sum < sum)
                        max_sum = sum;
            }
            /*
                 Else we can have  one more sollution
               long long cur_sum=0,ans=0
                 for(i=1;i<N;i++)
                 {
                  cur_sum=arr[i]+arr[i-1];
                  ans=max(ans,cur_sum);
                 }
                 return ans; 
            */
            return max_sum;
      }
};

int main()
{
      long long size, i;
      cin >> size;
      long long int *arr = new long long int(size);
      for (i = 0; i < size; i++)
            cin >> arr[i];
      Solution ob;
      cout << ob.pairWithMaxSum(arr, size) << endl;
      return 0;
}