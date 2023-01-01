#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beautySum(string s) {
        int i=0,j,count=0;
        for(i=0;i<s.size();i++){
         int m[26]={0};
             for(j=i;j<s.size();j++){
                 int ma_x=INT_MIN,mi_n=INT_MAX;
               m[s[j]-'a']++;
               //if(m.size()>=2){
                 for(int k=0;k<26;k++){
                      ma_x=max(ma_x,m[k]);
                      if(m[k]!=0)
                      mi_n=min(mi_n,m[k]);
                   }
                if(mi_n!=0)
                   count+=(ma_x-mi_n);
               }
            
        }
        return count;
    }
};
int main( ){
string s;
cin>>s;
Solution ob;
cout<<ob.beautySum(s);
return 0;
}