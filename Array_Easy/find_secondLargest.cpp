#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int find_largest (int *arr, int s ){
      int i, max = arr[0],temp;
      for (i = 1; i < s;i++)
      {
            if(max<arr[i])
            {
                  temp = max;
                  max = arr[i];
            }
            if(temp<arr[i] && arr[i]<max)
                  temp = arr[i];
      }
      return temp;
}
};
int main( ){
      int size,i;
      cin >> size;
      int *arr = new int(size);
      for (i = 0; i < size;i++)
            cin >> arr[i];
      Solution ob;
      cout << ob.find_largest(arr, size);
      return 0;
}