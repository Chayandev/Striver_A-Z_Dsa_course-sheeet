#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
   bool isOperand(char c){
        if((c>='a' && c<='z') ||(c>='A' && c<='Z') || (c>='1' && c<='9'))
        return true;
        return false;
    }
   int Operator(char c){
        if(c=='+' || c=='-')
        return 1;
        if(c=='*' || c=='/')
        return 2;
        if(c=='^')
        return 3;
        return 0;
    }
    string infixToPostfix(string s) {
       stack<char>st;
       string res="";
       for(int i=0;i<s.size();i++){
       if(isOperand(s[i]))
       res+=s[i];
       else{
           if(s[i]==')'){
               while(!st.empty() && st.top()!='('){
                   res+=st.top();
                   st.pop();
               }
               st.pop();
           }
           else if(s[i]=='(')
           st.push(s[i]);
           else{
              while(!st.empty() && st.top()!='(' && Operator(st.top())>=Operator(s[i]))
              {
                  res+=st.top();
                  st.pop();
              }
              st.push(s[i]);
           }
        }
       
       }
       while(!st.empty()){
           res+=st.top();
           st.pop();
       }
       return res;
    }
};
int main( ){
    string infx;
    cin >> infx;
    Solution ob;
    cout << ob.infixToPostfix(infx) << endl;
    return 0;
}