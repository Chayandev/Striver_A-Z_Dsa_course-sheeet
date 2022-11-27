#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      long long int findfib(long long int t[100], int n)
      {
            if (t[n - 1] != 0)
                  return t[n - 1];
            if (n == 1 || n == 2)
                  return t[n - 1] = 1;
            return t[n - 1] = findfib(t, n - 1) + findfib(t, n - 2);
      }

public:
      // Function to return list containing first n fibonacci numbers.
      vector<long long> printFibb(int n)
      {
            int i = 1;
            vector<long long int> v;
            
          long long int temp[100] = {0};
            while (i <= n)
            {
                  v.push_back(findfib(temp, i));
                  i++;
            }
            return v;
      }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      vector<long long> ans = ob.printFibb(n);
      for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " "  ;
      return 0;
}