#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void swap(int arr[],int i,int j)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public:
    int partition (int arr[], int low, int high)
    {
       int i,j;
        int pivot=arr[low];
        i=low;
        j=high;
        while(i<j)
        {
            while(arr[i]<=pivot )
            i++;
            while(arr[j]>pivot )
            j--;
            if(i<j)
            {
                swap(arr,i,j);
            }
            
        }
        swap(arr,j,low);
        return j;
    }
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
            int pivot_position=partition(arr,low,high);
            quickSort(arr,low,pivot_position-1);
            quickSort(arr,pivot_position+1,high);
        }
    }
    
  
};
int main( ){
      int n;
      cin >> n;
      int *arr = new int(n);
      int i;
      for (i = 0; i < n;i++)
            cin >> arr[i];
      Solution ob;
      ob.quickSort(arr, 0, n - 1);
      for (i = 0; i < n;i++)
            cout << arr[i] << ' ';
            return 0;
      
}