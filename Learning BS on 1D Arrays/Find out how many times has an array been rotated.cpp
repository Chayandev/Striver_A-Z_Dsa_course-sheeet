#include<bits/stdc++.h>
using namespace std;
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	   int l=0,h=n-1,mid;
	   while(l<=h){
	       mid=l+(h-l)/2;
	      // cout<<mid<<endl;
	       if((mid==0 && arr[mid]>arr[mid+1]) || (mid<n-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]))
	       return mid+1;
	       else if(arr[0]<=arr[mid] && arr[n-1]<arr[mid] && arr[mid]<arr[mid+1])
	       l=mid+1;
	       else
	       h=mid-1;
	   }
	   return 0;
	}

};
int main( ){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
Solution ob;
cout<<ob. findKRotation(arr,k);
return 0;
}
