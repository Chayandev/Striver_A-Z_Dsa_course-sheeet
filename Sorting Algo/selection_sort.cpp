#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int select(int arr[], int i, int n)
      {
            // code here such that selectionSort() sorts arr[]

            int min_index = i, j;
            for (j = i + 1; j < n; j++)
            {
                  if (arr[min_index] > arr[j])
                  {
                        min_index = j;
                  }
            }
            return min_index;
      }

      void selectionSort(int arr[], int n)
      {
            int i, selected_index, temp;
            for (i = 0; i < n - 1; i++)
            {
                  selected_index = select(arr, i, n);
                  // Swap the selected and posistioned index.
                  temp = arr[i];
                  arr[i] = arr[selected_index];
                  arr[selected_index] = temp;
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
      ob.selectionSort(arr, size);
      printSorted_array(arr, size);
      return 0;
}