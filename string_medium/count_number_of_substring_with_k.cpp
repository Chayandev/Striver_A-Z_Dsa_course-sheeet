/*
/normal solution
//TC-O(n*n)
//SC-O(n)
//first of all iterate the whole given string and apply a nested loop to check for distinct and substring formed with that distinct.then count the distinct if it mathches with the value of k the increment the count.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    long long int count(string s,int k){
        if(k<0)
        return 0;
        int i=0,j=0,size=0;
        long long ans=0;
        int m[26]={0};
        while(j<s.size()){
            m[s[j]-'a']++;
            if(m[s[j]-'a']==1)
            size++;
            while(size>k){
                m[s[i]-'a']--;
                if(m[s[i]-'a']==0)
                 size--;
                 i++;
            }
         ans +=j-i+1;
            j++;
        }
       // cout<<ans<<endl;
        return ans;
    }
  public:
    long long int substrCount (string s, int k) {
    	return count(s,k)-count(s,k-1);
    }
};
int main( ){
string s;
cin>>s;
int k;
cin>>k;
Solution ob;
cout<<ob.substrCount(s,k);
return 0;
}