// Median of two sorted arrray

// Approch:-1
// TC-O(n1+n2)
// SC-O(n1+n2) / O(1)

#include <bits/stdc++.h>
using namespace std;
/*
class Solution
{
public:
      double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
      {
            // vector<int>marge_arr;
            int median_1 = -1, median_2 = -1, total_size;
            double res = 0.0;
            total_size = nums1.size() + nums2.size();
            if (total_size % 2 == 0)
            {
                  median_1 = (total_size / 2);
                  median_2 = (total_size / 2) + 1;
            }
            else
            {
                  median_1 = (total_size / 2) + 1;
                  median_2 = (total_size / 2) + 1;
            }
            int i = 0, j = 0, count = 0;
            while (i < nums1.size() && j < nums2.size())
            {
                  if (nums1[i] < nums2[j])
                  {
                        //   marge_arr.push_back(nums1[i]);
                        count++;
                        if (count == median_1)
                              res += nums1[i];
                        if (count == median_2)
                              res += nums1[i];
                        i++;
                  }
                  else
                  {
                        // marge_arr.push_back(nums2[j]);
                        count++;
                        if (count == median_1)
                              res += nums2[j];
                        if (count == median_2)
                              res += nums2[j];
                        j++;
                        // count++;
                  }
            }
            while (i < nums1.size())
            {
                  // marge_arr.push_back(nums1[i]);
                  count++;
                  if (count == median_1)
                        res += nums1[i];
                  if (count == median_2)
                        res += nums1[i];
                  i++;
                  // count++;
            }
            while (j < nums2.size())
            {
                  // marge_arr.push_back(nums2[j]);
                  count++;
                  if (count == median_1)
                        res += nums2[j];
                  if (count == median_2)
                        res += nums2[j];
                  j++;
                  // count++;
            }

            //   double res;
            //   if(marge_arr.size()%2==0){
            //     res=(marge_arr[marge_arr.size()/2]+marge_arr[(marge_arr.size()/2)-1])/2.0;
            //   }
            //   else{
            //       res=marge_arr[marge_arr.size()/2];
            //   }

            return res / 2.0;
      }
};
int main()
{
      int n1, n2;
      cin >> n1 >> n2;
      vector<int> v1(n1), v2(n2);
      for (int i = 0; i < n1; i++)
            cin >> v1[i];
      for (int i = 0; i < n2; i++)
            cin >> v2[i];
      // double res;
      Solution ob;
      cout << ob.findMedianSortedArrays(v1, v2);
      return 0;
}
*/
// Approch-2(optimal)(using BS)

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
      {
            vector<int> marge_arr;
            int i = 0, j = 0;
            while (i < nums1.size() && j < nums2.size())
            {
                  if (nums1[i] < nums2[j])
                  {
                        marge_arr.push_back(nums1[i]);
                        i++;
                  }
                  else
                  {
                        marge_arr.push_back(nums2[j]);
                        j++;
                  }
            }
            while (i < nums1.size())
            {
                  marge_arr.push_back(nums1[i]);
                  i++;
            }
            while (j < nums2.size())
            {
                  marge_arr.push_back(nums2[j]);
                  j++;
            }

            double res;
            if (marge_arr.size() % 2 == 0)
            {
                  res = (marge_arr[marge_arr.size() / 2] + marge_arr[(marge_arr.size() / 2) - 1]) / 2.0;
            }
            else
            {
                  res = marge_arr[marge_arr.size() / 2];
            }
            return res;
      }
};
int main()
{
      int n1, n2;
      cin >> n1 >> n2;
      vector<int> v1(n1), v2(n2);
      for (int i = 0; i < n1; i++)
            cin >> v1[i];
      for (int i = 0; i < n2; i++)
            cin >> v2[i];
      // double res;
      Solution ob;
      cout << ob.findMedianSortedArrays(v1, v2);
      return 0;
}