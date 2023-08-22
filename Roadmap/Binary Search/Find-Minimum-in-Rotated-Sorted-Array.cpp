class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int res = INT_MAX;

        if(nums[l] < nums[r])
            return nums[l];

        while(l <= r)
        {
            int mid = (l + r) / 2;

            if(nums[mid] <= nums[r] && nums[mid] <= res)
            {
                res = nums[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return res;
    }
};