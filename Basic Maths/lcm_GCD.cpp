#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      long long findGcd(long long A, long long B)
      {
            if (B == 0)
                  return A;
            return findGcd(B, A % B);
      }

public:
      vector<long long> lcmAndGcd(long long A, long long B)
      {
            long long gcd = findGcd(A, B);
            vector<long long int> v;
            v.push_back((A * B) / gcd);
            v.push_back(gcd);
            return v;
      }
};
int main()
{
      int a, b;
      cin >> a >> b;
      Solution ob;
      vector<long long> ans = ob.lcmAndGcd(a, b);
      cout << ans[0] << " " << ans[1] << endl;
      return 0;
}