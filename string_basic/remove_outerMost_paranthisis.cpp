#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string res="";
        for(int i=0;i<s.size();i++){
            if(count==0 &&s[i]=='(')
           count++;
            else if(count>=1 && s[i]=='(')
            {res+=s[i];
            count++;
            }
            else if(count>1 && s[i]==')')
            {res+=s[i];
            count--;
            }
            else if(count==1 && s[i]==')')
            count--;
        }
        return res;
    }
};
int main( ){
 string s;
 cin>>s;
 Solution ob;
 cout<<ob.removeOuterParentheses(s);
return 0;
}