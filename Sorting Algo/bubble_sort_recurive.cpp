#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int e_idx)
{
      if (e_idx == 0)
            return;
      int i;
      for (i = 0; i < e_idx; i++)
      { 
            if(arr[i]>arr[i+1]){
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
      }
      }
      bubble_sort(arr, e_idx-1);
}
int main()
{
      int n;
      cin >> n;
      int *arr = new int(n);
      int i;
      for (i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      bubble_sort(arr, n - 1);
      for (i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}