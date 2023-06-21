//brutforce
class Solution{
public:	
     int solver(int *arr,int n){
        if(n==0)
        return arr[0];
        if(n<0)
        return 0;

        int pick=arr[n]+solver(arr,n-2);
        int notPick=solver(arr,n-1);

        return max(pick,notPick);
      }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   return solver(arr,n-1);
	}
};

//memoization
class Solution{
public:	
     int solver(int *arr,int *dp,int n){
        if(n==0)
        return arr[0];
        if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        int pick=arr[n]+solver(arr,n-2);
        int notPick=solver(arr,n-1);

        return dp[n]=max(pick,notPick);
      }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
            int dp[n]={-1};
	   return solver(arr,dp,n-1);
	}
};

//tabulation 
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int dp[n]={-1};
          dp[0]=arr[0];
          int pick,notPick;
          for(int i=1;i<n;i++){
             if(i-2>=0)
              pick=arr[i]+d[i-2];
              else
              pick=arr[i];
              notPick=dp[i-1];
             
             dp[i]=max(pick,notPick);
          }
          return dp[n-1];
	}
};

//space optimixation
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	   int prev=arr[0],prev2=0,curr=arr[0];
	   int pick,notPick;
	   for(int i=1;i<n;i++){
	       if(i-2>=0)
	       pick=arr[i]+prev2;
	       else
	       pick=arr[i];
	       notPick=prev;
	       
	       curr=max(pick,notPick);
	       prev2=prev;
	       prev=curr;
	   }
	   return curr;
	}
};