class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        int index = 0;
        vector<int> result;

        helper(root, result, index);

        return result;
    }

    void helper(TreeNode* root, vector<int>& result, int index)
    {
        if(!root)
            return;
        
        if(result.size() <= index)
            result.push_back(root->val);

        helper(root->right, result, index + 1);
        helper(root->left, result, index + 1);
    }
};