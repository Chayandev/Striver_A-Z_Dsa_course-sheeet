#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printSquere(int n)
    {
        int i, j;
        for (i = 1; i <=n; i++)
        {
            for (j = 1; j <=i; j++)
            {
                cout << i<<" ";
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
        ob.printSquere(n);
    }
    return 0;
}
