#include <iostream>
using namespace std;
class Solution
{
public:
      void printHolllow_suare(int n)
      {
            int i, j, t = 1;
            for (i = 1; i <= n; i++)
            {
                  t = 1;
                  for (j = 1; j <= 2 * n; j++)
                  {
                        if (j <= i)
                        {
                              cout << t << " ";
                              t++;
                        }
                        else if (j >= (2 * n) - i + 1)
                        {
                              t--;
                              cout << t << " ";
                        }
                        else
                              cout << "  ";
                  }
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
            ob.printHolllow_suare(n);
      }
      return 0;
}
