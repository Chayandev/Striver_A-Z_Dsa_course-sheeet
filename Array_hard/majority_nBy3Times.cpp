#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        vector<int>v;
        int i=0,num1=-1,num2=-1,c1=0,c2=0;;
        for(i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
                c1++;
            else if(num2==nums[i])
                c2++;
            else if(c1==0)
            {
                num1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                num2=nums[i];
                c2=1;
            }
            else
            {
            c1--;
            c2--;
            }
        }
        int c=0;
        for(i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
                c++;
                
        }
        if(c>nums.size()/3)
            v.push_back(num1);
        if(num1!=num2){
        c=0;
        for(i=0;i<nums.size();i++)
        {
            if(num2==nums[i])
                c++;
                
        }
        if(c>nums.size()/3)
            v.push_back(num2);
        }
        if(v.size()==0)
        v.push_back(-1);
        return v;
    }
};
int main( ){
      int n,ele,i;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n;i++)
             {
                   cin >> ele;
                   v.push_back(ele);
             }
             Solution ob;
             vector<int>ans=ob.Solve(n,v);
              for (auto x:ans)
             {
                   cout << x << " ";
             }
             return 0;
}