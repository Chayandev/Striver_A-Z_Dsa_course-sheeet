
#include <bits/stdc++.h>
using namespace std;

// recursion
class Solution
{

public:
      int solve(int n, int m, vector<vector<int>> grid)
      {
            if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
                  return 0;
            if (n == 0 && m == 0)
                  return 1;
            if ((n < 0 && m < 0) || grid[n][m] == 1)
                  return 0;
            int up = solve(n - 1, m, grid);
            int left = solve(n, m - 1, grid);

            return up + left;
      }
      int countGridPath(int n, int m, vector<vector<int>> grid)
      {
            return solve(n, m, grid);
      }
};

// memoization

class Solution
{

public:
      int solve(vector<vector<int>> &dp, int n, int m, vector<vector<int>> grid)
      {
            if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
                  return 0;
            if (n == 0 && m == 0)
                  return 1;
            if ((n < 0 && m < 0) || grid[n][m] == 1)
                  return 0;
            if (dp[n][m] != -1)
                  return dp[n][m];

            int up = solve(dp, n - 1, m, grid);
            int left = solve(dp, n, m - 1, grid);

            return dp[n][m] = up + left;
      }
      int countGridPath(int n, int m, vector<vector<int>> grid)
      {
            vector<vector<int>> dp(n, vector<int>(m, -1));
            return solve(dp, n, m, grid);
      }
};

// tabulation
class Solution
{

public:
      int countGridPath(int n, int m, vector<vector<int>> grid)
      {
            if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
                  return 0;
            vector<vector<int>> dp(n, vector<int>(m, 0));

            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < m; i++)
                  {
                        if (i == 0 && j == 0)
                              dp[i][j] = 1;
                        else
                        {
                              if (grid[i][j] != 1)
                              {
                                    int left = 0, up = 0;
                                    if (i > 0)
                                          up = dp[i - 1][j];
                                    if (j > 0)
                                          left = dp[i][j - 1];
                                    dp[i][j] = up + left;
                              }
                        }
                  }
            }
            return dp[n - 1][m - 1];
      }
};

// space optimaization

class Solution
{

public:
      int countGridPath(int n, int m, vector<vector<int>> grid)
      {
            if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1)
                  return 0;
            vector<int> dp(m, 0);
            for (int i = 0; i < n; i++)
            {
                  vector<int> temp(m, 0);
                  for (int j = 0; j < m; i++)
                  {
                        if (i == 0 && j == 0)
                              temp[j] = 1;
                        else
                        {
                              if (grid[i][j] != 1)
                              {
                                    int left = 0, up = 0;
                                    if (i > 0)
                                          up = dp[j];
                                    if (j > 0)
                                          left = temp[j - 1];
                                    temp[j] = up + left;
                              }
                        }
                  }
                  dp = temp;
            }
            return dp[m - 1];
      }
};
