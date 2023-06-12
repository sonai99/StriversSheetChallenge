#include <bits/stdc++.h>
string writeAsYouSpeak(int n)
{
    // Write your code here.
    if (n == 1)
        return "1";
    string num = writeAsYouSpeak(n - 1);
    int count = 1;
    int prev = num[0];
    string res = "";

    for (int i = 1; i < num.length(); i++)
    {
        if (num[i] == prev)
            count++;
        else
        {
            res += count + '0';
            res += prev;
            prev = num[i];
            count = 1;
        }
    }

    res += count + '0';
    res += prev;

    return res;
}