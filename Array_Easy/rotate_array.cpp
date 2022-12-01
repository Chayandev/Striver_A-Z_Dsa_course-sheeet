#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
      void reverse(vector<int> &v, int s, int e)
      {
            e = e - 1;
            while(s<e)
            {
                  int temp;
                  temp = v[s];
                  v[s] = v[e];
                  v[e] = temp;
                  s++;
                  e--;
            }
      }

public:
      void rotate(vector<int>&v,int k)
      {
              int size = v.size(),i;
             k = size - (k % size);
            reverse(v, 0, k);
            reverse(v, k, size);
            reverse(v ,0, size);
      }

};
void print(vector<int>&v)
{
      int i;
      for (i = 0; i < v.size();i++)
            cout << v[i] << " ";
}
int main()
{
      int s,ele,i,k;
      cin >> s;
      vector<int> v;
      for (i = 0; i < s;i++)
      {
            cin >> ele;
            v.push_back(ele);
      }
      cin>> k;
      Solution ob;
      ob.rotate(v,k);
      print(v);
      return 0;
}