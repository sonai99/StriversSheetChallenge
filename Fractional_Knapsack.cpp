#include <bits/stdc++.h>
double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return ((double)a.second / a.first) > ((double)b.second / b.first); });
    double maxProfit = 0;
    int currWt = 0;
    for (auto p : items)
    {
        if (p.first + currWt <= w)
        {
            currWt += p.first;
            maxProfit += p.second;
        }
        else
        {
            int remain = w - currWt;
            maxProfit += double((double)p.second * (w - currWt)) / p.first;
            break;
        }
    }
    return maxProfit;
}