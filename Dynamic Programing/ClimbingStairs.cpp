#include<bits/stdc++.h>
using namespace std;

vector<int> arr(46, -1);
class Solution
{
public:
      int climbStairs(int n)
      {
            // memoizaition
            if (arr[n] != -1)
                  return arr[n];
            if (n <= 0)
                  return arr[0] = 0;
            if (n == 1 || n == 2)
                  return arr[n] = n;
            return arr[n] = climbStairs(n - 1) + climbStairs(n - 2);
      }
};
// Tbulation
class Solution
{
public:
      int climbStairs(int n)
      {
            int dp[n] = {-1};
            dp[0] = 0, dp[1] = 1;
            int i;
            for (i = 2; i <= n; i++)
            {
                  dp[i] = dp[i - 1] + dp[i - 2];
            }
            return dp[i - 1];
      }
};

// space optiminsation
class Solution
{
public:
      int climbStairs(int n)
      {
            if (n <= 2)
                  return n;
            int s0 = 1, s1 = 2, s2;
            for (int i = 2; i < n; i++)
            {
                  s2 = s0 + s1;
                  s0 = s1;
                  s1 = s2;
            }
            return s2;
      }
};
