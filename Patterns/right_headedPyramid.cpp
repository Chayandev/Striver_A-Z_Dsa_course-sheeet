#include<iostream>
using namespace std;
class Solution{
      private:
      void printUpper(int n)
      { int i, j;
            for (i = 0; i < n;i++)
            {
                  for (j = 0; j<= i; j++)
                  {
                        cout << "* ";
                  }
                  cout << endl;
            }
      }
      private:
      void printLower(int n)
      {
         int i, j;
            for (i = 0; i < n;i++)
            {
                  for (j = 0; j< n-i; j++)
                  {
                        cout << "* ";
                  }
                  cout << endl;
            }
      }

public:
      void  rightHeadedPyramid(int n){
            printUpper(n);
            printLower(n - 1);
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
        ob.rightHeadedPyramid(n);
    }
    return 0;
}