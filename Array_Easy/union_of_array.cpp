#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      // arr1,arr2 : the arrays
      //  n, m: size of arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(int arr1[], int arr2[], int n, int m)
      {
            set<int> set;
            vector<int> v;
            int i;
            for (i = 0; i < n; i++)
                  set.insert(arr1[i]);
            for (i = 0; i < m; i++)
                  set.insert(arr2[i]);
            for (auto &it : set)
                  v.push_back(it);

            return v;
      }
};
int main()
{
      int n, m, i;
      cin >> n >> m;
      int *a = new int(n), *b = new int(m);
      for (i = 0; i < n; i++)
            cin >> a[i];
      for (i = 0; i < m; i++)
            cin >> b[i];
      Solution ob;
      vector<int> ans = ob.findUnion(a, b, n, m);
      for (i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
      return 0;
}