#include <iostream>
using namespace std;
class Solution
{
public:
      void print0and1pattern(int n)
      {
            int i, j;
            for (i = 1; i <= n; i++)
            {
                  if (i % 2 == 0)
                  {
                        for (j = 1; j <= i; j++)
                        {
                              if (j % 2 == 0)
                                    cout << '1' << " ";
                              else
                                    cout << "0"
                                         << " ";
                        }
                  }
                  else
                  {
                        for (j = 1; j <= i; j++)
                        {
                              if (j % 2 == 0)
                                    cout << '0' << " ";
                              else
                                    cout << "1"
                                         << " ";
                        }
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
            ob.print0and1pattern(n);
      }
      return 0;
}