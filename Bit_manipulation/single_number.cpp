#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,s_num=0;
        for(i=0;i<nums.size();i++)
        {
          s_num^=nums[i];
        }
        return s_num;
    }
};

int main()
{
      vector<int> v;
      int ele, n,i;
      cin >> n;
      for (i = 0; i < n;i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
      cout<<ob.singleNumber(v)<<endl;
}