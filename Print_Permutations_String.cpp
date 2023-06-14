#include <bits/stdc++.h>
void permute(int index, string &s, vector<string> &res)
{
    if (index == s.length())
    {
        res.push_back(s);
        return;
    }

    for (int i = index; i < s.length(); i++)
    {
        swap(s[i], s[index]);
        permute(index + 1, s, res);
        swap(s[i], s[index]);
    }
}
vector<string> findPermutations(string &s)
{
    // Write your code here.
    vector<string> res;
    permute(0, s, res);
    return res;
}