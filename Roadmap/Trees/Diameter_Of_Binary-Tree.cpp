class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter = 0;
        helper(root, max_diameter);

        return max_diameter;
    }

    int helper(TreeNode* node, int& max_diameter)
    {
        if(!node)
            return 0;
        
        int depth_left = helper(node->left, max_diameter);
        int depth_right = helper(node->right, max_diameter);

        if(depth_left + depth_right > max_diameter)
            max_diameter = depth_left + depth_right;
        
        return max(depth_left, depth_right) + 1;
    }
};