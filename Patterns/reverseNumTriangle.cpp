#include <iostream>
using namespace std;

class Solution
{
public:
      void printReverseNumTriangle(int n)
      {
            int i, j;
            for (i = 0; i < n; i++)
            {
                  for (j = 1; j <= n - i; j++)
                        cout << j << ' ';
                  cout << endl;
            }
      }
};

int main()
{
      int t;
      cin >> t;
      while(t--)
      {
            int n;
            cin >> n;
            Solution ob;
            ob.printReverseNumTriangle(n);
      }
      return 0;
}