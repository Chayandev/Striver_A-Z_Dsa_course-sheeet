// Frequencies of Limited Range Array Elements
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      // Function to count the frequency of all elements from 1 to N in the array.
      void frequencyCount(vector<int> &arr, int N, int P)
      {
            int count_arr[N + 1] = {0};
            int i;
            for (i = 0; i < N; i++)
            {
                  if (arr[i] <= N)
                        count_arr[arr[i]]++;
            }
            for (i = 0; i < N; i++)
            {
                  arr[i] = count_arr[i + 1];
            }
      }
};

int main()
{
      int N, P, ele, i;
      vector<int> v;
      cin >> N;
      for (i = 0; i < N; i++)
      {
            cin >> ele;
            v.emplace_back(ele);
      }
      cin >> P;
      Solution ob;
      ob.frequencyCount(v, N, P);

      for (i = 0; i < N; i++)
      {
            cout << v[i] << ' ';
      }
      return 0;
}