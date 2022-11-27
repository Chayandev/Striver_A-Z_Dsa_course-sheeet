//  Clear the ith bit and return the output of new genareted number.
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int clear_ith_bit (int n,int k ){
      int mask = 1 << k;
      mask = ~mask;
      return n & mask;
}

};
int main( ){
      int n, k;
      cin >> n >> k;
      Solution ob;
      cout<<ob.clear_ith_bit(n, k - 1)<<endl;
      return 0;
}