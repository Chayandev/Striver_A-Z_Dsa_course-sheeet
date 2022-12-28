#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return a<b;
}
class Solution {
public:
    int myAtoi(string s) {
       long int num=0,i=0,flag=1;
        while(i<s.size()){
           if(s[i]>='0' && s[i]<='9'){
                num=num*10+(s[i]-'0');
            }
            if(s[i]=='-'){
                flag=-1;
                }
            if((s[i]>='a' && s[i]<='z') || ( s[i]>='A' && s[i]<='Z'))
            return flag*num;
            if(s[i]=='.')
            return flag* num;
             if((s[i]=='-' && s[i+1]=='+')||(s[i]=='+' &&s[i+1]=='-'))
            return flag*num;
            if(s[i]!=' '&&(s[i+1]==' ' ||s[i+1]=='+' || s[i+1]=='-'||s[i+1]=='.'))
              return flag*num;
            if(flag*num<=INT_MIN)
            return INT_MIN;
            if(flag*num>=INT_MAX)
            return INT_MAX;

              i++;
              //cout<<num<<" ";
        }
      return flag*num;
    }
};
int main( ){
string s;
cin>>s;
Solution ob;
cout<<ob.myAtoi(s);
return 0;
}