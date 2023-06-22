#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*        Don't write main().        Don't read input, it is passed as function argument.            No need to print anything.        Taking input and printing output is handled automatically.    */
    int long long sum = 0;
    int long long cursum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        cursum = max(cursum, sum);
    }
    return cursum;
}