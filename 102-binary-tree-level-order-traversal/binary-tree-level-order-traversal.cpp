/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void nthLevelDisplay(TreeNode* root, int currentLevel, int targetLevel, vector<int>& output) {
        if (root == nullptr) return;
        if (currentLevel == targetLevel) {
            output.push_back(root->val);
            return;
        }
        nthLevelDisplay(root->left, currentLevel + 1, targetLevel, output);
        nthLevelDisplay(root->right, currentLevel + 1, targetLevel, output);
    }

    int level(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(level(root->left), level(root->right));
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int depth = level(root); 
        for (int i = 1; i <= depth; ++i) {
            vector<int> currentLevel;
            nthLevelDisplay(root, 1, i, currentLevel);
            result.push_back(currentLevel);
        }
        return result;
    }
};
