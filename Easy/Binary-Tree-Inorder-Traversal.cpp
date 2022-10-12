class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> result = {};
        traverse(root, result);
        return result;
    }
    
    void traverse(TreeNode* root, vector<int>& result)
    {
        if(root != NULL)
        {
            traverse(root->left, result);
            result.push_back(root->val);
            traverse(root->right, result);
        }
    }
};