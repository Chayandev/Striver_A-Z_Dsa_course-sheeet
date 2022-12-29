#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>un1,un2;
        for(int i=0;i<s.size();i++){
        if((un1[s[i]] && un1[s[i]]!=t[i]) ||(un2[t[i]] &&un2[t[i]]!=s[i])){
                return false;
            }
            else{
                un1[s[i]]=t[i];
                un2[t[i]]=s[i];
            }
        }
        return true;
    }
};
int main(){
  string s,t;
  cin>>s>>t;
  Solution ob;
  cout<<ob.isIsomorphic(s,t);
  return 0;
  }
