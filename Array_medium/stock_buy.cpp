#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int maxProfit(vector<int> &prices)
      {
            if (prices.size() == 0)
                  return 0;
            int min_price = prices[0], profit, max_profit = INT_MIN;
            for (int i = 1; i < prices.size(); i++)
            {
                  if (min_price > prices[i])
                        min_price = prices[i];
                  profit = prices[i] - min_price;
                  max_profit = max(profit, max_profit);
            }
            if (max_profit <= 0)
                  return 0;
            return max_profit;
      }
};
int main()
{
      int n, i, ele;
      cin >> n;
      vector<int> v;
      for (i = 0; i < n; i++)
      {
            cin >> ele;
            v.emplace_back(ele);
      }
      Solution ob;
      cout << ob.maxProfit(v) << endl;

      return 0;
}

/*Another Variant of the probelem*/
#include <bits/stdc++.h>
using namespace std;
void stockBuySell(int arr[], int n)
{

      int buy = 0, sell = 0, flag = 0;

      for (int i = 1; i < n; i++)
      {

            if (arr[i - 1] <= arr[i] && arr[i] != arr[buy])
            {

                  sell++;

                  flag = 1;
            }

            else if (buy == sell)
                  buy = i, sell = i;

            else
            {

                  cout << "(" << buy << " " << sell << ")"
                       << " ";

                  buy = i, sell = i;
            }
      }
      if (buy != n - 1 && sell == n - 1)
      {

            cout << "(" << buy << " " << sell << ")"
                 << " ";
      }

      if (flag == 0)
      {

            cout << "No Profit" << endl;

            return;
      }

      cout << endl;
}
int main()
{
      int n, i, *arr;
      cin >> n;
      arr = new int(n);
      for (i = 0; i, n; i++)
            cin >> arr[i];
      stockBuySell(arr, n);
      return 0;
}