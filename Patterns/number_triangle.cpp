#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printTriangle(int n)
    {
        int i, j;
        for (i = 1; i <=n; i++)
        {
            for (j = 1; j<=i; j++)
            {
                cout << j<<" ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
