class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        
        if(!p || !q)
            return false;

        if(p->val != q->val || !isSameTree(p->left, q->left) || !isSameTree(p->right, q->right))
            return false;
    
        return true;    
    }
};