#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int minEatingSpeed(vector<int> &piles, int h)
      {
            int left = 1, right = *max_element(piles.begin(), piles.end()), mid, ans = INT_MAX;
            while (left <= right)
            {
                  mid = left + (right - left) / 2;
                  long long time = 0;
                  for (int i = 0; i < piles.size(); i++)
                  {
                        if (piles[i] % mid == 0)
                              time += piles[i] / mid;
                        else
                              time += (piles[i] / mid) + 1;
                  }
                  if (time <= h)
                  {
                        ans = mid;
                        right = mid - 1;
                  }
                  else
                  {
                        left = mid + 1;
                  }
            }
            return ans;
      }
};
int main()
{
      int n,h;
      cin >> n;
      vector<int> piles(n);
      for (int i = 0; i < n;i++){
            cin >> piles[i];
      }
      cin >> h;
      Solution ob;
      cout << ob.minEatingSpeed(piles, h);
      return 0;
}