#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string preToPost(string pre_exp) {
           stack<char>st;
        string res="";
       reverse(pre_exp.begin(),pre_exp.end());
       //cout<<post_exp<<endl;
       //return post_exp;
       for(int i=0;i<pre_exp.size();i++){
           if((pre_exp[i]>='a' && pre_exp[i]<='z') || (pre_exp[i]>='A' && pre_exp[i]<='Z'))
           st.push(pre_exp[i]);
       }
       for(int i=0;i<pre_exp.size();i++){
          // cout<<post_exp[i]<<" ";
           if((pre_exp[i]>='a' && pre_exp[i]<='z') || (pre_exp[i]>='A' && pre_exp[i]<='Z'))
           { //cout<<st.top()<<" ";
               res+=st.top();
             st.pop();
           } 
           else
           res+=pre_exp[i];
       }
       return res;
    }
};
int main( ){
      string infx;
      cin >> infx;
      Solution ob;
      cout << ob.preToPost(infx) << endl;
      return 0;

}