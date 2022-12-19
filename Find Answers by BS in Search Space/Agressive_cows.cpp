#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    bool check(vector<int>stalls,int dist,int cow){
        int k=stalls[0],i;
        cow--;
        for(i=1;i<stalls.size();i++){
            if(stalls[i]-k>=dist){
            cow--;
            if(cow==0)
            return true;
            k=stalls[i];
            }
        }
        return false;
    }
    public:
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int max_dist=stalls[n-1]-stalls[0],ans=INT_MIN;
        int left=1,right=max_dist,mid;
      /*
      Time Complexity:O(N*N)
        for(d=1;d<=max_dist;d++){
            bool possible =check(stalls,d,k);
            if(possible)
            ans=max(ans,d);
        }
       */
     //the above approch takes more time complexity so it is optimised using binary search.
      
        while(left<=right){
            mid=left+(right-left)/2;
            bool possible=check(stalls,mid,k);
            if(possible){
                ans=max(ans,mid);
                left=mid+1;
            }
           
            else
            right=mid-1;
        }
       return ans;
    }
};
int main()
{
  int n;
  cin>>n;
  vector<int>stalls(n);
  int i,cows;
  for(i=0;i<n;i++)
    cin>>stalls[i];
  cin>>cows;
  Solution ob;
  cout<<ob.solve(stalls.size(), cows, stalls);
  return 0;
}
