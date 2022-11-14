#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printSquere(int n)
    {
        int i, j;
        for (i = 0; i <n; i++)
        {
            for (j = 0; j <n-i; j++)
            {
                cout << "*"<<" ";
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
