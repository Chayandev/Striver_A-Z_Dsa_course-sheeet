#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    bool binarySearch(vector<int> &nums,int low,int high,int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            return true;
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,rotation=0,n=nums.size();
        if(nums.size()==1)
        {
            if(nums[0]==target)
            return true;
            return false;
        }
          while(l<h){
              if(nums[l]>nums[l+1]){
                 rotation=l;
                 break;
                 }
                 if(nums[h-1]>nums[h]){
                     rotation=h-1;
                     break;
                 }
                l++;
                h--;
              }
           
              if(binarySearch(nums,0,rotation,target))
              return true;
              if(binarySearch(nums,rotation+1,n-1,target))
              return true;
              return false;
          }
    
};
int main( ){

return 0;
}