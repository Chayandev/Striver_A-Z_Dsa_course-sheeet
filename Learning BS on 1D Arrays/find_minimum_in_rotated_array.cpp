#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i;
          i=0;int j=nums.size()-1;
        while(i<j){
            if(nums[i]>nums[i+1])
            {return nums[i+1];
             //i++;
             }
            if(nums[j-1]>nums[j]){
                return nums[j];
               // j--;
            }
            i++;
            j--;
        }
        return nums[0];
    }
};
int main( ){

return 0;
}