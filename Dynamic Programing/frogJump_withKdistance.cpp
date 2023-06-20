//memoizition
class Solution {
  public:
  int solver(vector<int>& height, vector<int>&dp,int n,int k){
       if(n==0)
            return 0;
       if(dp[n]!=-1){
            return dp[n];
       }
       int minCost = INT_MAX;
       for (int j = 1; j <= k;j++){
            if(n-j>=0)
            int jump = solver(height, dp, n - 1, k) + abs(height[i] - height[i - j]);
            minCost = min(minCost, jump);
       }
       return dp[n] = minCost;
  }
    int minimizeCost(vector<int>& height, int n, int k) {
          vector<int> dp[n, -1];
          return solver(height, dp, n-1, k);
    }
};
//tabulation
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
         vector<int>dp(n,-1);
         dp[0]=0;
         for(int i=1;i<n;i++){
              int minCost=INT_MAX;
             for(int j=1;j<=k;j++){
                 if(i-j>=0){
                     int jump=dp[i-j]+abs(height[i]-height[i-j]);
                     minCost=min(minCost,jump);
                 }
            }
            dp[i]=minCost;
         }
         return dp[n-1];
    }
};