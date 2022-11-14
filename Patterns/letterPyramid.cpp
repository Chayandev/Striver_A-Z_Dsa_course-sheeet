#include<iostream>
using namespace std;
class Solution{
      public:
    void printletterPyramid(int n) {
       int i,j,k;
       char c='A';
       for(i=1;i<=n;i++)
       { c='A';
           for(k=1;k<=n-i;k++)
           cout<<' ';
           for(j=1;j<=2*i-1;j++)
           {
               if(j<=i)
               {
                   cout<<c;
                   c++;
                   if(i==j)
                   c--;
               }
               
               else
               {  
                   c--;
                   cout<<c;
               }
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
        ob.printletterPyramid(n);
    }
    return 0;
}