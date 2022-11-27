#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      void bubbleSort(int arr[], int n)
      {
            int i, j, temp;
            for (i = 0; i < n - 1; i++)
            {
                  for (j = i + 1; j < n; j++)
                  {
                        if (arr[i] > arr[j])
                        {
                              temp = arr[i];
                              arr[i] = arr[j];
                              arr[j] = temp;
                        }
                  }
            }
      }
};
void print(int arr[], int n)
{
      for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
}

int main()
{
      int n, *arr;
      scanf("%d", &n);
      arr = (int *)malloc(n * sizeof(int));
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      Solution ob;
      ob.bubbleSort(arr, n);
      print(arr, n);
      return 0;
}