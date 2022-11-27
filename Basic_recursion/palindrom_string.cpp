#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool isPalindrome(string s) {
        int i;
        if(s.size()==0 || s.size()==1)
          return true;
        string str="";
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122 || s[i]>='0' && s[i]<='9')
                str+=s[i];
            else if(s[i]>=65 && s[i]<=90)
                str+=(s[i]+32);
        }
        string temp = str;
        reverse(str.begin(), str. end());
        cout << temp<<endl << str << endl;
        if(temp==str)
            return true;
        return false;
    }
};
int main()
{
      string s;
      getline(cin, s);
      Solution ob;
      cout << ob.isPalindrome(s) << endl;
      return 0;
}