#include <bits/stdc++.h>
using namespace std;

class Solution
{
      // Function to find the leaders in the array.
public:
      vector<int> leaders(int a[], int n)
      {
            int i;
            // int i=n-1;
            vector<int> v;
            for (i = n - 1; i >= 0; i--)
            {
                  if (i == n - 1)
                  {
                        v.push_back(a[i]);
                  }
                  else
                  {
                        int it = v.size() - 1;
                        if (v[it] <= a[i])
                              v.push_back(a[i]);
                  }
            }
            reverse(v.begin(), v.end());

            return v;
      }
};
void print(vector<int>&v){
      int i;
      for (i = 0; i < v.size();i++)
            cout << v[i] << " ";
}
int main()
{
      int n, i;
      cin >> n;
      int a[n];
      for (i = 0; i < n; i++)
            cin >> a[i];
      Solution ob;
      vector<int> res = ob.leaders(a, n);
      print(res);
      return 0;
}