class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || helper(root->left, root->right);
    }

    bool helper(TreeNode* rootLeft, TreeNode* rootRight)
    {  
        if(nullptr == rootLeft && nullptr == rootRight)
        {
            return true;
        }
        else if(rootLeft && rootRight)
        {
            return rootLeft->val == rootRight->val && 
            helper(rootLeft->left, rootRight->right) && 
            helper(rootLeft->right, rootRight->left);
        }
        
        return false;
    }
};