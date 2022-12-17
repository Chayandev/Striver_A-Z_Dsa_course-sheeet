#include <bits/stdc++.h>
using namespace std;

// TC-O(m+n)
// SC-O(1)
/*
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int count=0,i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                count++;
                if(count==k)
                return arr1[i];
                i++;
            }
            else{
                count++;
                if(count==k)
                return arr2[j];
                j++;
            }
        }
        while(i<n){
                count++;
                if(count==k)
                return arr1[i];
                i++;
        }
        while(j<m){
            count++;
            if(count==k)
                return arr2[j];
                j++;
        }
        return 0;
    }
};
*/
// TC-O(min(log(n),log(m)))
// SC-O(1)

/*edge cases when n is greter then m the we have to reverse the arr1 to arr2
  and when htere is less elements then k in arr1 then we have to take the high n instead of k, and if theere is less elelemt then k in arra2 and we have to take all he element from arr2 then we have to take low as max(0,m-k)
  */
class Solution
{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if (n > m)
            return kthElement(arr2, arr1, m, n, k);
        int l = max(0, k - m), h = min(k, n), cut1, cut2;
        while (l <= h)
        {
            cut1 = l + (h - l) / 2;
            cut2 = k - cut1;
            int l1, l2, r1, r2;

            l1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
            l2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
            r1 = cut1 == n ? INT_MAX : arr1[cut1];
            r2 = cut2 == m ? INT_MAX : arr2[cut2];

            if (l1 <= r2 && l2 <= r1)
            {
                return max(l1, l2);
            }
            else if (l2 > r1)
                l = cut1 + 1;
            else
                h = cut1 - 1;
        }
        return 0;
    }
};
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < m; i++)
        cin >> a2[i];
    Solution ob;
    cout << ob.kthElement(a1, a2, n, m, k);
    return 0;
}