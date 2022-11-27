#include<iostream>
using namespace std;
class Solution{
  public:
    void printNos(int N) {
       if(N==0)
       return ;
       cout<<N<<" ";
       return printNos(N-1);
    }
};
    

int main()
{
      int num;
      cin >> num;
      Solution ob;
      ob.printNos(num);
      return 0;
}