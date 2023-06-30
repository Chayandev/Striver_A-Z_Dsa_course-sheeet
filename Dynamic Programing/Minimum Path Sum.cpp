//memoization

class Solution {
public:
    int solver(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==0 && j==0)
         return grid[0][0];
        if(i<0 || j<0)
          return 1e9;
        if(dp[i][j]!=-1)
         return dp[i][j];

         int up=grid[i][j]+solver(i-1,j,grid,dp);
         int left=grid[i][j]+solver(i,j-1,grid,dp);

         return dp[i][j]=min(up,left); 
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solver(m-1,n-1,grid,dp);
    }
};

//tabulation

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0)
                dp[i][j]=grid[i][j];
                else{
                    int left=1e7,up=left,right=left,down=right;
                    if(i>=1){
                        up=grid[i][j]+dp[i-1][j];
                    }
                    if(j>=1){
                        left=grid[i][j]+dp[i][j-1];
                    }
                    
                    dp[i][j]=min(left,up);
                }
            }
        }
        return dp[n-1][m-1];
    }
};

//space optimazion

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        vector<int>dp(m,1e7);
        
        for(int i=0;i<n;i++){
            vector<int>temp(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0)
                   temp[j]=grid[i][j];
                else{
                    int left=1e7,up=left;
                    if(i>=1){
                        up=grid[i][j]+dp[j];
                    }
                    if(j>=1){
                        left=grid[i][j]+temp[j-1];
                    }
                    
                    temp[j]=min(left,up);
                }
            }
            dp=temp;
        }
        return dp[m-1];
    }
};
