class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productAll = 1;
        int countZero = 0;
        int indexZero;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
            {
                productAll *= nums[i];
            } 
            else
            {
                countZero++;
                indexZero = i;
                if(countZero > 1)
                {
                    vector<int> result(nums.size(), 0);
                    return result;
                }
            }
        }

        if(countZero == 1)
        {
            vector<int> result(nums.size(), 0);
            result[indexZero] = productAll;
            return result;
        }

        for(int i = 0; i < nums.size(); ++i)
        {
            nums[i] = productAll / nums[i];
        }

        return nums;
    }
};