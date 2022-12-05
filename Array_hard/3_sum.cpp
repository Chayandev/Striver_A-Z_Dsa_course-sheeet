#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      vector<vector<int>> threeSum(vector<int>& v)
      {
            vector<vector<int>> res;
            sort(v.begin(), v.end());
            int sum = 0, low, high, i;
            for (i = 0; i < v.size(); i++)
            {
                
                if(i==0 ||(i>0 && v[i-1]!=v[i])){
                  sum = 0 - v[i], low = i + 1, high = v.size() - 1;
                  while (low < high)
                  {
                        if (sum == v[low] + v[high])
                        {
                              vector<int> temp;
                              temp.push_back(v[i]);
                              temp.push_back(v[low]);
                              temp.push_back(v[high]);
                              res.push_back(temp);
                        
                              while (low < high && v[low + 1] == v[low])
                                    low++;
                              while (low < high && v[high - 1] == v[high])
                                    high--;
                              low++, high--;
                        }
                        else if (sum > v[low] + v[high])
                        {
                              low++;
                        }
                        else
                              high--;
                  }
                }
            }
            return res;
      }
};
int main()
{
      int n, i, ele, target,j;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      cin >> target;
      Solution ob;
      vector<vector<int>> ans = ob.threeSum(v);
      for (i = 0; i < ans.size();i++)
      {

            cout << "[";
            for (j = 0; j < ans[i].size();j++)
               {   cout << ans[i][j];
                    if(j<ans[i].size()-1)
                          
                    cout << ',';
               }

            cout <<"]"<< " ";
      }
            return 0;
}