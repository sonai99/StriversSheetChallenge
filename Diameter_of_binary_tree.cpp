/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int height(int &diameter, TreeNode<int> *root)
{
    if (!root)
        return 0;

    int lh = height(diameter, root->left);
    int rh = height(diameter, root->right);

    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    // Write Your Code Here.
    int diameter = 0;
    height(diameter, root);
    return diameter;
}
