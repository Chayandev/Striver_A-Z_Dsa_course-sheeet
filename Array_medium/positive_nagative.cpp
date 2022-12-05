#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    vector<int> v1, v2;
    int i, j = 0, k = 0, p = 0, N = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            v1.push_back(arr[i]);
            p++;
        }
        else
        {
            v2.push_back(arr[i]);
            N++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (j < p && k < N)
        {
            if (i % 2 == 0)
            {
                arr[i] = v1[j];
                j++;
            }
            else
            {
                arr[i] = v2[k];
                k++;
            }
        }
        else if (j < p)
        {
            arr[j] = v1[j];
            j++;
        }
        else if (k < N)
        {
            arr[i] = v2[k];
            k++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int *a = new int(n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rearrange(a, n);
    for (i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}

/* When in an array smae number of nagative and positive elements will be present */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> v(nums.size(), 0);
        int i, j = 0, k = 1;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                v[j] = nums[i];
                j += 2;
            }
            else
            {
                v[k] = nums[i];
                k += 2;
            }
        }
        return v;
    }
};
int main()
{
    int n,i,ele;
    cin >> n;
    vector<int> v;
    for (i = 0; i < n;i++)
    {
        cin >> ele;
        v.emplace_back(ele);
    }
    Solution ob;
    ob.rearrangeArray(v);
    for (i = 0; i < n;i++)
        cout << v[i] << " ";
        return 0;
}