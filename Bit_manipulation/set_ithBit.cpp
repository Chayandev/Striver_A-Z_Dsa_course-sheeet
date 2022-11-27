// Set the ith bit
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int set_ith_bit (int n,int k ){
      int mask = 1 << k;
      return n | mask;
}

};
int main( ){
 int n,k;
 cin >> n>>k;
 Solution ob;
 cout << ob.set_ith_bit(n, k - 1) << endl;
 return 0;
}