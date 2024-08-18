class Solution {
public:
    bool isBalanced(TreeNode* root) {
        bool res = true;

        helper(root, res);

        return res;
    }

    int helper(TreeNode* root, bool& res)
    {
        if(!root)
            return 0;

        int depth_l = helper(root->left, res);
        int depth_r = helper(root->right, res);

        if(abs(depth_l - depth_r) > 1)
            res = false;

        return max(depth_l, depth_r) + 1;
    }
};