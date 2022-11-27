#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,res=0,count_1=0;
        for(i=0;i<32;i++)
        {  count_1=0;
            for(j=0;j<nums.size();j++)
            {
                 if((nums[j]>>i) & 1)
                    count_1++;            //count the set bit.
            }
              
                count_1=count_1%3;
                count_1=count_1<<i;   //set the bit of the resultent number.
                res=res|count_1;
            
        }
        return res;
        
    }
};
int main()
{
      vector<int> v;
      int ele, n;
      cin >> n;
      for (int i = 0; i < n;i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      Solution ob;
     cout<< ob.singleNumber(v)<<endl;
     return 0;
}