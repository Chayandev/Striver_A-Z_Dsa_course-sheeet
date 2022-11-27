#include<iostream>
using namespace std;
class Solution{
      public:
    void printGfg(int N) {
        if(N==0)
        return ;
        cout<<"GFG"<<" ";
        return printGfg(N-1);
    }
};
int main()
{
      int n;
      cin >> n;
      Solution ob;
      ob.printGfg(n);
      return 0;
}