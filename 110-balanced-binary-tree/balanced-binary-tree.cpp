class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr)
            return 0; 
        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
