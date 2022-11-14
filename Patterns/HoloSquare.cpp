#include <iostream>
using namespace std;
class Solution
{
public:
      void printHoloSquare(int n)
      {
       int i, j;
            for (i = 1; i <= n; i++)
            {
                  for (j = 1; j <= n; j++)
                  {
                        if (i == 1 || i == n)
                              cout << "*";
                        else
                        {
                              if (j == 1 || j == n)
                                    cout << "*";
                              else
                                    cout << " ";
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
            ob.printHoloSquare(n);
      }
      return 0;
}

