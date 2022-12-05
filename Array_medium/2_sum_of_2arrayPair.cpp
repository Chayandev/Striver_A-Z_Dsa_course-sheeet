#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
      static bool compare(const pair<int, int> &v1, const pair<int, int> &v2)
      {
            if (v1.first > v2.first)
                  return false;
            return true;
      }

public:
      vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
      {
            int i;
            vector<pair<int, int>> v;
            unordered_map<int, int> m;
            for (i = 0; i < N; i++)
            {
                  m[X - A[i]]++;
            }
            for (i = 0; i < M; i++)
            {
                  if (m[B[i]] >= 1)
                  {
                        v.emplace_back(X - B[i], B[i]);
                        m[B[i]]--;
                  }
            }
            sort(v.begin(), v.end(), compare);
            return v;
      }
};
int main()
{
      int n, i, ele, targt, m;
      cin >> n >> m;
      int *a1 = new int(n), *a2 = new int(m);
      for (i = 0; i < n; i++)
            cin >> a1[i];
      for (i = 0; i < m; i++)
            cin >> a2[i];
      cin >> targt;
      Solution ob;
      vector<pair<int, int>> ans = ob.allPairs(a1, a2, n, m, targt);
      if (ans.size() == 0)
            cout << "-1" << endl;
      else
      {
            for (i = 0; i < ans.size(); i++)
                  cout << ans[i].first << " " << ans[i].second << endl;
      }
      return 0;
}