class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sort(nums, 0, nums.size()-1);
    }
    
    TreeNode* sort(vector<int>& nums, int left, int right){
        if(left > right){
            return NULL;
        }
        
        int mid = (left + right) / 2;
        TreeNode* temp = new TreeNode(nums[mid]);
        
        temp->left = sort(nums, left, mid-1);
        
        temp->right = sort(nums, mid+1 , right);
        return temp;
    }
};