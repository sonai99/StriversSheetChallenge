#include <bits/stdc++.h>

string reverseString(string &str)
{

    stringstream ss(str);

    stack<string> st;

    string word;

    while (ss >> word)
    {

        st.push(word);
    }

    string ans = "";

    while (!st.empty())
    {

        string top = st.top();

        st.pop();

        ans += top;

        ans += ' ';
    }

    return ans;
}