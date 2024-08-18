class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* result = nullptr;
        helper(root, p, q, result);
        return result;
    }

    bool helper(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& result) {
        if (!root) {
            return false;
        }

        bool left = helper(root->left, p, q, result);
        bool right = helper(root->right, p, q, result);
        
        bool mid = (root == p || root == q);

        if (mid + left + right >= 2) {
            result = root;
        }

        return mid || left || right;
    }
};
