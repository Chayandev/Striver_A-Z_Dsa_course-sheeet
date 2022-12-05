#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int maxProduct(vector<int> &arr)
      {
            int n = arr.size();

            // 1st approch
            /*
                            long long current_pro=1,max_pro=-9999999,i;
                              for(i=0;i<n;i++)
                              {
                                  current_pro*=arr[i];
                                  if(max_pro<current_pro)
                                  {
                                      max_pro=current_pro;
                                  }
                                  if(current_pro==0)
                                  {
                                      current_pro=1;
                                  }
                              }
                              current_pro=1;
                              for(i=n-1;i>0;i--)
                              {
                                  current_pro*=arr[i];
                                  if(max_pro<current_pro)
                                  {
                                      max_pro=current_pro;
                                  }
                                  if(current_pro==0)
                                  {
                                      current_pro=1;
                                  }
                              }
                              return max_pro;
        */

            // Second Approch
            int max_val = arr[0], min_val = arr[0], ans = arr[0], i;
            for (i = 1; i < n; i++)
            {
                  if (arr[i] < 0)
                        swap(min_val, max_val);
                  max_val = max(arr[i], arr[i] * max_val);
                  min_val = min(arr[i], arr[i] * min_val);
                  ans = max(ans, max_val);
            }

            return ans;
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
      cout << ob.maxProduct(v) << endl;
      return 0;
}