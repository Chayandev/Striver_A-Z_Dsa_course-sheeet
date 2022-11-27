
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int s1,s2,i,j;
        s1=mid-l+1;
        s2=r-mid;
        int arr1[s1],arr2[s2];
        for(int i=0;i<s1;i++)
        arr1[i]=arr[l+i];
        for(j=0;j<s2;j++)
        arr2[j]=arr[mid+1+j];
        int idx1=0,idx2=0;
        int k=l;
         while(idx1<s1 && idx2<s2)
         {
             if(arr1[idx1]<=arr2[idx2])
             {
                 arr[k]=arr1[idx1];
                 k++;
                 idx1++;
             }
             else
             {
                 arr[k]=arr2[idx2];
                 k++;
                idx2++;
             }
         }
         while(idx1<s1)
         {
            arr[k]=arr1[idx1];
                 k++;
                 idx1++; 
         }
         while(idx2<s2)
         {
             arr[k]=arr2[idx2];
                 k++;
                 idx2++;
         }
         
}
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int mid;
        if(l<r){
        mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
  }
};

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    Solution ob;
    
    ob.mergeSort(arr,0,n-1);
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
         
}
