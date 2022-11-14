#include<iostream>
using namespace std;
class Solution
{
private:
      void printUpperDiamond(int n)
      {
            int i, j, k;
            for (i = 1; i <= n; i++)
            {
                  for (k = 1; k <= n - i; k++)
                        cout << " ";
                  for (j = 1; j <= i; j++)
                        cout << "* ";
                  cout << endl;
            }
      }

private:
      void printLowerDiamond(int n)
      {
            int i, j, k;
            for (i = n; i >= 1; i--)
            {
                  for (k = 1; k <= n - i; k++)
                        cout << " ";
                  for (j = 1; j <= i; j++)
                        cout << "* ";
                  cout << endl;
            }
      }

public:
      void printDiamond(int n)
      {
            printUpperDiamond(n);
            printLowerDiamond(n);
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
             ob.printDiamond(n);
       }
       return 0;
 }