#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool isOperand(char c)
      {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '1' && c <= '9'))
                  return true;
            return false;
      }
      string postToPre(string post_exp)
      {
            stack<string> st;
            for (int i = 0; i < post_exp.size(); i++)
            {
                  if (isOperand(post_exp[i]))
                        st.push(string(1, post_exp[i]));
                  else
                  {
                        string op1 = st.top();
                        st.pop();
                        string op2 = st.top();
                        st.pop();
                        string temp = post_exp[i] + op2 + op1;
                        st.push(temp);
                  }
            }
            return st.top();
      }
};
int main()
{
      string infx;
      cin >> infx;
      Solution ob;
      cout << ob.postToPre(infx) << endl;
      return 0;
}