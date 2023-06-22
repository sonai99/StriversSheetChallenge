#include <bits/stdc++.h>
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
bool dfs(BinaryTreeNode<int> *root, unordered_set<int> &s, int k)
{
    if (!root)
        return false;
    if (s.count(k - root->data))
        return true;
    s.insert(root->data);
    return dfs(root->left, s, k) || dfs(root->right, s, k);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    unordered_set<int> s;
    return dfs(root, s, k);
}