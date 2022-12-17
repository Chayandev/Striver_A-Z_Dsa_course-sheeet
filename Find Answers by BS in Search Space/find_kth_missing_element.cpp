/*
 Intuition
diffrence of  two consicutive elemnt in array is the count of missing number as array is sorted.

# Approach
step-1:
check if the first elemnt is 1 or not , if not then count the missing number , nd if count is greter then or equal to the target value k then return the kth missing number (1+(count-k))

step-2:
same process , will be followed , traverse the whole array and count the missing number if count is greter or equal to the kth positon then return the missing lemnt (arr[i]+(count-k)),
else increse count value

step3:
if no element found after step:2 then is is obious that the number is misign from the out of then range of the array for that return arr[lat-ELEMENT]+(k-count).


# Complexity
- Time complexity:
O(n)

- Space complexity:
O(1)

# Code
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        if(arr[0]!=1){
            count+=arr[0]-1;
            if(count>=k){
                return 1+(k-1);
            }
        }
        int i=0;
        for(i=0;i<arr.size()-1;i++){
            if(arr[i+1]!=arr[i]+1){
                if(count+(arr[i+1]-arr[i]-1)>=k){
                    return arr[i]+(k-count);
                }
                count+=arr[i+1]-arr[i]-1;
            }
        }
        return arr[i]+(k-count);
    }
};

//Approch-2
/*
TC-O(log(n))
SC-O(1)
*/
/*
 if(arr.size()==0 || arr[0]>k)
        return k;
        int right=arr.size()-1;
        if(arr[right]-(right+1)<k)
        return arr[right]+(k-(arr[right]-(right+1)));
        int left=1;
        while(left<=right){
           int mid=left+(right-left)/2;
           if(arr[mid]-(mid+1)<k)
           left=mid+1;
           else
           right=mid-1;
        }
        return arr[right]+(k-(arr[right]-(right+1)));
    }
*/
int main(){
      int n,k;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      cin>>k;
      Solution ob;
      cout<<ob. findKthPositive(arr,k)<<endl;
}
