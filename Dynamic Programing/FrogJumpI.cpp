#include<bits/stdc++.h>
using namespace std;

//memoizition
class Solution {
  public:
    int solver(vector<int>& height,vector<int>&dp,int n){
        if(n==0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        
        int two_jump,one_jump;
        
         one_jump=solver(height,dp,n-1)+abs(height[n]-height[n-1]);
        if(n>1)
         two_jump=solver(height,dp,n-2)+abs(height[n]-height[n-2]);
        else
         two_jump=INT_MAX;
        
        return dp[n]=min(one_jump,two_jump);
        
    }
    int minimumEnergy(vector<int>& height, int n) {
       vector<int>dp(n,-1);
       int res=solver(height,dp,n-1);
       return res;
    }
};
//Tabulation
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
  vector<int>dp(n,-1);
  dp[0] = 0;
  int one_jump, two_jump, res,i;
  for (i = 1; i < n; i++)
  { 
       one_jump=dp[i-1]+abs(heights[n]-heights[n-1]);
        if(n>1)
         two_jump=dp[i-2]+abs(heights[n]-heights[n-2]);
        else
         two_jump=INT_MAX;
        
        dp[i]=min(one_jump,two_jump);

   }
   return dp[i - 1];
}
//Space Optimization
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
   int fs=0,ss=0,curr=0,temp;
   for(int i=1;i<n;i++){
       fs=fs+abs(heights[i]-heights[i-1]);
       if(i>1)
       ss=ss+abs(heights[i]-heights[i-2]);
       else
       ss=INT_MAX;
       temp=curr;
       curr=min(fs,ss);
       ss=temp;
       fs=curr;
   }
   return curr;
}
