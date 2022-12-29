#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int depth_count=0,max_depth=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            depth_count++;
            else if(s[i]==')')
            depth_count--;
            if(depth_count>max_depth)
             max_depth=depth_count;
        }
        return max_depth;
    }
};
int main( ){
string s;
cin>>s;
Solution ob;
cout<<ob.maxDepth(s);
return 0;
}