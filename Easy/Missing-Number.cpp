class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actualSum = 0;
        int desiredSum = (nums.size()*(nums.size() + 1)) / 2;

        for(int num : nums)
        {
            actualSum += num;
        }

        return desiredSum - actualSum;
    }
};