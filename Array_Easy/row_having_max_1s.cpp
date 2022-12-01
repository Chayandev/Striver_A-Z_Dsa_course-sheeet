#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int find_row_with_max_1s(vector<vector<int>> v)
      {
            // int i, j, noOfOnes = 0, max_one = INT_MIN, row_max_1s;
            // for (i = 0; i < v.size(); i++)
            // {
            //       for (j = 0; j < v[i].size(); j++)
            //       {
            //             if (v[i][j] == 1)
            //             {
            //                   noOfOnes = v[0].size() - j;
            //                   if (max_one < noOfOnes)
            //                   {
            //                         max_one = noOfOnes;
            //                         row_max_1s = i;
            //                   }
            //                   break;
            //             }
            //       }
            // }
            // return row_max_1s;
            //}
            int selected_row,row,left_most_1pos=-1,i;
	   for(row=0;row<v.size();row++){
	   for(i=0;i<v[row].size();i++){
	       if(v[row][i]==1){
	           left_most_1pos=i;
	           selected_row=row;
	             break;
	       }
	    }
	       if(i!=v[row].size())
	       break;
	   }
	  // cout<<left_most_1pos<<" "<<selected_row<<endl;
	   for(i=row+1;i<v.size();i++){
	       if(left_most_1pos>=0)
	      while(v[i][left_most_1pos-1]!=0){
	          left_most_1pos--;
	          selected_row=i;
	      }
	          
	   }
	   
	   if(left_most_1pos!=-1)
	   return selected_row;
	   return -1;
	}
      
};
int main()
{
      int n, m, ele, i, j;
      cin >> n >> m;
      vector<vector<int>> v(n, vector<int>(m));
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < m; j++)
            {
                  cin >> v[i][j];
            }
      }
      Solution ob;
      cout << ob.find_row_with_max_1s(v);
      return 0;
}