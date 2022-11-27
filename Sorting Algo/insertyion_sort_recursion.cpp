#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int idx,int n)
{
     if(idx==n)
     {
           return;
     }
     int value = arr[idx];
     int hole = idx;
     while(hole>0 && arr[hole-1]>value )
     {
           arr[hole] = arr[hole - 1];
           hole = hole - 1;
     }
     arr[hole] = value;
     insertion_sort(arr, idx + 1, n);
}
int main()
{
      int n;
      cin >> n;
      int *arr= new int(n);
      int i;
      for (i = 0; i < n;i++)
      {
            cin >> arr[i];
      }
      insertion_sort(arr, 1, n);
      for (i = 0; i < n;i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}