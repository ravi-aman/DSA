/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x, left, right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        traverse(root, 0, result);
        for (int i = 1; i < result.size(); i += 2) {
            reverse(result[i].begin(), result[i].end());
        }
        return result;
    }

private:
    void traverse(TreeNode* node, int level, vector<vector<int>>& result) {
        if (!node) return;

        if (result.size() <= level) {
            result.resize(level + 1);
        }

        result[level].push_back(node->val);

        traverse(node->left, level + 1, result);
        traverse(node->right, level + 1, result);
    }
};