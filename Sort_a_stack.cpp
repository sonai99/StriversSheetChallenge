#include <bits/stdc++.h>

void sortedInsert(stack<int> &stack, int num1)
{
    if (stack.empty() || stack.top() < num1)
    {
        stack.push(num1);
        return;
    }
    int n = stack.top();
    stack.pop();
    sortedInsert(stack, num1);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack, num);
}