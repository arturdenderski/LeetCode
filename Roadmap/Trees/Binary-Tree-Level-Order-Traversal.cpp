class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        int index = 0;
        vector<vector<int>> result;
        helper(root, result, index);
        return result;
    }

    void helper(TreeNode* root, vector<vector<int>>& result, int index)
    {
        if(!root)
            return;

        if (index >= result.size()) {
            result.push_back(vector<int>());
        }
        
        result[index].push_back(root->val);
        helper(root->left, result, index + 1);
        helper(root->right, result, index + 1);
        return;
    }
};