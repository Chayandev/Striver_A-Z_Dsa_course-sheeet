#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        if(j==0)
        return nums[0];
        while(i<=j){
            if(nums[i]!=nums[i+1])
            return nums[i];
            if(nums[j]!=nums[j-1])
            return nums[j];
            i=i+2;
            j=j-2;
        }
        return -1;
    }
};
int main( ){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];
Solution ob;
cout<<ob.singleNonDuplicate(v);
return 0;
}
