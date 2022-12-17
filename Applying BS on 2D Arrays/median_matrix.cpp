#include<bits/stdc++.h>
using namespace std;
class Solution{   
    int find_occurance_less_thanEqual_mid(vector<int>&v,int low,int high,int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(v[mid]<=target){
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return low;
    }
public:
    int median(vector<vector<int>> &matrix, int R, int C){
     int i,j,mini=INT_MAX,maxe=INT_MIN;
     for(i=0;i<R;i++){
         mini=min(mini,matrix[i][0]);
         maxe=max(maxe,matrix[i][C-1]);
     }
     int mid;
     while(mini<=maxe){
         mid=mini+(maxe-mini)/2;
         int count=0;
         for(i=0;i<R;i++){
             count+=find_occurance_less_thanEqual_mid(matrix[i],0,C-1,mid);
         }
         if(count<=(R*C)/2)
         mini=mid+1;
         else
         maxe=mid-1;
     }
     return mini;
     
    }
};
int main( ){
 int n,m,i,j;
 cin>>n>>m;
 vector<vector<int> >v(n,vector<int>(m));
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>v[i][j];
    }
}
Solution ob;
cout<<ob.median(v,n,m);
return 0;
}