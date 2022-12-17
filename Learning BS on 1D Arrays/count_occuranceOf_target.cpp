#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      /* if x is present in arr[] then returns the count
            of occurrences of x, otherwise returns 0. */
      int count(int arr[], int n, int x)
      {
            int l = 0, r = n - 1, mid, *l_b, *u_b;
            // while(l<=r){
            //     mid=l+(r-l)/2;
            //     if(arr[mid]==x){
            l_b = lower_bound(arr, arr + n, x);
            u_b = upper_bound(arr, arr + n, x);
            return u_b - l_b;
            //     }
            //     else if(arr[mid]>x)
            //     r=mid-1;
            //     else
            //     l=mid+1;
            // }
            return 0;
      }
};
int main()
{
      int n, k;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      cin >> k;
      Solution ob;
      ob.count(arr, n, k);
      return 0;
}