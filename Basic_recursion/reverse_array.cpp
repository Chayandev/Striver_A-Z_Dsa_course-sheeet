#include<bits/stdc++.h>
using namespace std;
class Solution{
      public:
      void reverse(vector<int>&v,int s,int e)
      {
            int temp;
            if(s==e)
                  return;
            temp = v[s];
            v[s] = v[e];
            v[e] = temp;
            reverse(v, s + 1, e - 1);
      }
};
int main()
{
      int n;
      vector<int> v;
      cin >> n;
      int ele, i;
      for (i = 0; i < n;i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
ob.reverse(v, 0, n-1);
 for (i = 0; i < n;i++)
      {
            cout << v[i] << " ";
      }
      return 0;
}
