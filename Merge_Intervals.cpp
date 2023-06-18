#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> ans;
    int n = intervals.size();
    int j = 0;
    sort(intervals.begin(), intervals.end());
    if (intervals.size() == 0)
        return ans;
    ans.push_back(intervals[0]);
    for (int i = 1; i < n; i++)
    {
        // if they overlap
        if (ans[j][1] >= intervals[i][0])
            ans[j][1] = max(ans[j][1], intervals[i][1]);
        else
        {
            // not overlapping means increase J and push element
            j++;
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}
