#include<bits/stdc++.h>
using namespace std;
class Solution
{
 public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
       int i,value,hole;
        for(i=1;i<n;i++)
        {
            value=arr[i];
            hole=i;
            while(hole>0 && arr[hole-1]>value)
            {
                arr[hole]=arr[hole-1];
                hole--;
            }
            arr[hole]=value;
        }
    
    }
};
void printSorted_array(int arr[], int size)
{
      for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
}
int main()
{
      int size, *arr, i;
      cin >> size;
      arr = (int *)malloc(size * sizeof(int));
      for (i = 0; i < size; i++)
      {
            cin >> arr[i];
      }
      Solution ob;
      ob.insertionSort(arr, size);
      printSorted_array(arr, size);
      return 0;
}