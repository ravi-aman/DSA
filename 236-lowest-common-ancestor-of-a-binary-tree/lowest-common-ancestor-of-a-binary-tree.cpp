/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool exsist(TreeNode* root, TreeNode* target) {
        if (root == NULL) return false;
        if (root == target) return true;
        return exsist(root->left, target) || exsist(root->right, target);
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) return root;
        if (exsist(root->left, p) && exsist(root->right, q)) return root;
        if (exsist(root->right, p) && exsist(root->left, q)) return root;
        if (exsist(root->left, p) && exsist(root->left, q)) return lowestCommonAncestor(root->left, p, q);
        return lowestCommonAncestor(root->right, p, q);
    }
};
