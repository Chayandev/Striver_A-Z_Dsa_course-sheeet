#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      bool scearch(vector<int> &v, int ele)
      {
            int i;
            for (i = 0; i < v.size(); i++)
            {
                  if (v[i] == ele)
                        return true;
            }
            return false;
      }
};
int main()
{
      int s, i, ele, s_ele;
      cin >> s;
      vector<int> v;
      for (i = 0; i < s; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      cin >> s_ele;
      Solution ob;
      if (ob.scearch(v, s_ele))
            cout << "present" << endl;
      else
            cout << "Not Present" << endl;

      return 0;
}