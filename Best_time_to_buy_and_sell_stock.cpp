#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int price = 0;
    int max_till_now = 0;
    int mini = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        mini = min(mini, prices[i]);
        price = prices[i] - mini;
        max_till_now = max(max_till_now, price);
    }
    return max_till_now;
}