#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      long long sumOfSeries(long long N)
      {
            if (N == 0)
                  return 0;
            return pow(N, 3) + sumOfSeries(N - 1);   
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      cout << ob.sumOfSeries(n) << endl;
      return 0;
}
