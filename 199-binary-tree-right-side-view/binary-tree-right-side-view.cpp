class Solution {
public:
    void dfs(TreeNode* root, int depth, vector<int>& result) {
        if (!root) return;

        if (depth == result.size()) {
            result.push_back(root->val);
        }

        dfs(root->right, depth + 1, result);
        dfs(root->left, depth + 1, result);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        dfs(root, 0, result);
        return result;
    }
};
