#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      int minDays(vector<int> &bloomDay, int M, int K)
      {
            const int N = bloomDay.size();
            if ((long)M * K > N)
                  return -1;
            int left = 1, right = *max_element(bloomDay.begin(), bloomDay.end()), mid, ans = -1;
            while (left <= right)
            {
                  int count_b = 0, count_c = 0;
                  mid = left + (right - left) / 2;
                  for (int i = 0; i < bloomDay.size(); i++)
                  {
                        if (bloomDay[i] <= mid)
                        {
                              count_c++;
                        }
                        else
                              count_c = 0;
                        if (count_c == K)
                        {
                              count_b++;
                              count_c = 0;
                        }
                  }
                  if (count_b >= M)
                  {
                        ans = mid;
                        right = mid - 1;
                  }
                  else
                        left = mid + 1;
            }
            return ans;
      }
};

int main()
{
      int number_boqutes, numberof_flower, number_bloomyDay;
      cin >> number_bloomyDay;
      vector<int> v(number_bloomyDay);
      for (int i = 0; i < number_bloomyDay; i++)
            cin >> v[i];
      cin >> number_boqutes >> numberof_flower;
      Solution ob;
      cout << ob.minDays(v, number_boqutes, numberof_flower);
      return 0;
}