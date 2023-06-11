#include <bits/stdc++.h>
int findMinimumCoins(int amount)
{
    // Write your code here
    int ans = 0;
    vector<int> coins = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    while (amount)
    {
        for (auto coin : coins)
        {
            if (amount >= coin)
            {
                amount -= coin;
                break;
            }
        }
        ans++;
    }
    return ans;
}
