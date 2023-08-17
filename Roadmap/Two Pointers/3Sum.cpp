class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int last = abs(nums[0]) - 1;

        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(last == nums[i])
                continue;

            int target = -nums[i];
            int x = i + 1;
            int y = nums.size() - 1;

            while(x < y)
            {
                if(nums[x] + nums[y] == target)
                {
                    res.push_back({nums[i], nums[x], nums[y]});
                    int lastx = nums[x];
                    while(nums[x] == lastx)
                    {
                        x++;
                        if(x == nums.size())
                        {
                            break;
                        }
                    }
                }
                else if(nums[x] + nums[y] < target)
                {
                    x++;
                }
                else if(nums[x] + nums[y] > target)
                {
                    y--;
                }
            }
            last = nums[i];
        }
        return res;
    }
};