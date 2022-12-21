#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthElement(vector<int> &arr1,vector<int> &arr2, int n, int m, int k)
    {
        // int count=0,i=0,j=0;
        // while(i<n && j<m){
        //     if(arr1[i]<=arr2[j]){
        //         count++;
        //         if(count==k)
        //         return arr1[i];
        //         i++;
        //     }
        //     else{
        //         count++;
        //         if(count==k)
        //         return arr2[j];
        //         j++;
        //     }
        // }
        // while(i<n){
        //         count++;
        //         if(count==k)
        //         return arr1[i];
        //         i++;
        // }
        // while(j<m){
        //     count++;
        //     if(count==k)
        //         return arr2[j];
        //         j++;
        // }
        // return 0;
        if(n>m)
        return kthElement(arr2,arr1,m,n,k);
        int l=max(0,k-m),h=min(k,n),cut1,cut2;
        while(l<=h){
            cut1=l+(h-l)/2;
            cut2=k-cut1;
            int l1,l2,r1,r2;
            
            l1=cut1==0?INT_MIN:arr1[cut1-1];
            l2=cut2==0?INT_MIN:arr2[cut2-1];
            r1=cut1==n?INT_MAX:arr1[cut1];
            r2=cut2==m?INT_MAX:arr2[cut2];
            
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
           else if(l2>r1)
            l=cut1+1;
            else
            h=cut1-1;
        }
        return 0;
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
      cout << ob.kthElement(v1, v2);
      return 0;
}
