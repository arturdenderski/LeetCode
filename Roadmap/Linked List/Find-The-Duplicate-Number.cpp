class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            if(nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }

        return -1;
    }
};