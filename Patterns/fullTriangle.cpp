#include <iostream>
using namespace std;
class Solution
{
public:
      void printFullTriangle(int n)
      {
            int i, j, k;
            for (i = 1; i <= n; i++)
            {
                  for (k = 1; k <=n - i; k++)
                        cout << ' ';
                  for (j = 1; j <= (2 * i) - 1; j++)
                        cout << "*";

                  cout << endl;
            }
      }
};
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            Solution ob;
            ob.printFullTriangle(n);
      }
      return 0;
}