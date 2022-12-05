#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
      {
            int i = 0, j = 0, k;
            if (nums2.size() == 0)
                  return;
            i = m - 1;
            j = n - 1;
            while (i >= 0 && j >= 0)
            {
                  if (nums1[i] >= nums2[j])
                  {
                        nums1[j + i + 1] = nums1[i];
                        i--;
                  }
                  else
                  {
                        nums1[i + j + 1] = nums2[j];
                        j--;
                  }
            }
            while (j >= 0)
            {
                  nums1[i + j + 1] = nums2[j];
                  j--;
            }
            //          i=0;
            //         j=m;
            //         while(i<m){
            //             if(nums1[i]<=nums1[j]){
            //                 i++;
            //             }
            //             else if(nums1[i]>nums1[j]){
            //                 int temp;
            //                 temp=nums1[i];
            //                 nums1[i]=nums1[j];
            //                 nums1[j]=temp;
            //                 for(k=m;k<nums1.size()-1;k++)
            //                 {
            //                     if(nums1[k]>nums1[k+1])
            //                     {
            //                         temp=nums1[k];
            //                         nums1[k]=nums1[k+1];
            //                           nums1[k+1]=temp;
            //                     }
            //                 }
            //                 i++;

            //             }

            //         }
      }
};
int main()
{
      int n, m, ele, i, j;
      cin >> n >> m;
      vector<int> v1, v2;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v1.push_back(ele);
      }
      for (i = 0; i < m; i++)
      {

            v1.push_back(0);
      }
      for (i = 0; i < m; i++)
      {
            cin >> ele;
            v2.push_back(ele);
      }
      Solution ob;
      ob.merge(v1, n, v2, m);
      for (i = 0; i < v1.size(); i++)
            cout << v1[i] << ' ';
      return 0;
}