//memoization
class Solution {
  public:
    int solver(vector<vector<int>>& points,int day,int last,  vector<vector<int>>&dp){
         int maxi=0;
        if(day==0){
           
            for(int i=0;i<3;i++){
                if(i!=last){
                    maxi=max(maxi,points[0][i]);
                }
               
            }
             return dp[0][last]=maxi;
        }
            if(dp[day][last]!=-1)
            return dp[day][last];
            
            
            for(int i=0;i<3;i++){
                if(i!=last){
                int point=points[day][i]+solver(points,day-1,i,dp);
                maxi=max(maxi,point);
                }
            }
            return dp[day][last]=maxi;
        
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
       vector<vector<int>>dp(n,vector<int>(4,-1));
       return solver(points,n-1,3,dp);
    }
};
//tabulation
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
       vector<vector<int>>dp(n,vector<int>(4,0));
       
       dp[0][0]=max(points[0][1],points[0][2]);
       dp[0][1]=max(points[0][0],points[0][2]);
       dp[0][2]=max(points[0][0],points[0][1]);
       dp[0][3]=max({points[0][0],points[0][1],points[0][2]});
       
       for(int day=1;day<n;day++){
           for(int last=0;last<4;last++){
               int maxi=INT_MIN;
               dp[day][last]=0;
               for(int task=0;task<3;task++){
                   if(task!=last){
                       int point=points[day][task]+dp[day-1][task];
                       maxi=max(point,maxi);
                   }
               }
               dp[day][last]=maxi;
           }
       }
       return dp[n-1][3];
    }
};

//space optimization
int ninjaTraining(int n, vector < vector < int > > & points) {

  vector < int > prev(4, 0);

  prev[0] = max(points[0][1], points[0][2]);
  prev[1] = max(points[0][0], points[0][2]);
  prev[2] = max(points[0][0], points[0][1]);
  prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

  for (int day = 1; day < n; day++) {

    vector < int > temp(4, 0);
    for (int last = 0; last < 4; last++) {
      temp[last] = 0;
      for (int task = 0; task <= 2; task++) {
        if (task != last) {
          temp[last] = max(temp[last], points[day][task] + prev[task]);
        }
      }
    }

    prev = temp;

  }

  return prev[3];
}

