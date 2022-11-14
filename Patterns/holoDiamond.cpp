#include <iostream>
using namespace std;
class Solution
{
private:
      void UpperPart(int n)
      {
            int i, j;
            for (i = n; i >= 1; i--)
            {

                  for (j = 1; j <= 2 * n; j++)
                  {
                        if (j <= i || j >= (2 * n) - i + 1)
                        {
                              cout << '*';
                        }
                        else
                              cout << " ";
                  }
                  cout << endl;
            }
      }

private:
      void LowerPart(int n)
      {
            int i, j;
            for (i = 1; i <= n; i++)
            {

                  for (j = 1; j <= 2 * n; j++)
                  {
                        if (j <= i || j >= (2 * n) - i + 1)
                        {
                              cout << '*';
                        }
                        else
                              cout << " ";
                  }
                  cout << endl;
            }
      }

public:
      void printholoDiamonde(int n)
      {
            UpperPart(n);
            LowerPart(n);
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
            ob.printholoDiamonde(n);
      }
      return 0;
}