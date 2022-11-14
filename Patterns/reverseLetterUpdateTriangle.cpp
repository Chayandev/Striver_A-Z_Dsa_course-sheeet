#include <iostream>
using namespace std;
class Solution
{
public:
      void printreverseletterUpdateTriangle(int n)
      {
           int i,j;
        char c='A';
        for(i=0;i<n;i++)
        {   c='A';
            c=c+n-1;
            for(j=0;j<=i;j++)
            {
                cout<<c<<" ";
                c--;
            }
            cout<<endl;
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
            ob.printreverseletterUpdateTriangle(n);
      }
      return 0;
}