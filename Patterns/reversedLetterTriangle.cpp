#include <iostream>
using namespace std;
class Solution
{
public:
      void printletterTriangle(int n)
      {
            int i, j;
            char c = 'A';
            for (i = 0; i < n; i++)
            {
                  c = 'A';
                  for (j = 0; j <n- i; j++)
                  {
                        cout << c;
                        c++;
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
            ob.printletterTriangle(n);
      }
      return 0;
}