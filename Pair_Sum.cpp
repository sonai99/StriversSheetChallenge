#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> completeAns;
    // to store a list of pair
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> pairAns;
                // to store a pair.
                // Also we want each pair to be shorted.
                // which means for a pair, first smaller number then larger.
                pairAns.push_back(min(arr[i], arr[j]));
                pairAns.push_back(max(arr[i], arr[j]));
                completeAns.push_back(pairAns);
            }
        }
    }
    // Now we have to sort the list of pair (i.e completeAns) according to the first value of pair.
    sort(completeAns.begin(), completeAns.end());
    return completeAns;
}