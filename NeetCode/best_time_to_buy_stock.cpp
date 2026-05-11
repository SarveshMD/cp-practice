#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int left = 0, right = 1;
    while (right < prices.size())
    {
        int profit = prices[right] - prices[left];
        if (profit > 0)
        {
            maxProfit = max(maxProfit, profit);
            right++;
        }
        else
        {
            left = right;
            right++;
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {10, 1, 5, 6, 7, 1};
    cout << maxProfit(prices) << endl;
}