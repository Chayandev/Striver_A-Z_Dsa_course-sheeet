#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
      int high_sum=0,low_sum=*max_element(nums.begin(),nums.end()),i,mid,ans;
      for(i=0;i<nums.size();i++)
      high_sum+=nums[i];
      while(low_sum<=high_sum){
        mid=low_sum+(high_sum-low_sum)/2;
        int count=1,sum=0;
        for(i=0;i<nums.size();i++){
           if(sum+nums[i]>mid){
               count++;
               sum=nums[i];
           }
           else
           sum+=nums[i];
        }
        
        if(count<=k)
        {
            ans=mid;
            high_sum=mid-1;
        }
        else
        low_sum=mid+1;
      }
     return ans;
    }
};
int  main( ){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];
int k;
cin>>k;
Solution ob;
cout<<ob.splitArray(v,k);
return 0;
}
