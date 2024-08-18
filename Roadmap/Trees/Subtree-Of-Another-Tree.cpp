class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool res = false;

        traverse(root, subRoot, res);

        return res;
    }

    void traverse(TreeNode* root, TreeNode* subRoot, bool& res)
    {
        if(!root)
            return;
        
        if(root->val == subRoot->val)
        {
            res = isSameTree(root, subRoot) ? true : res;
        }
        
        traverse(root->left, subRoot, res);
        traverse(root->right, subRoot, res);

        return;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        
        if(!p || !q)
            return false;

        if(p->val != q->val)
            return false;
    
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);   
    }
};