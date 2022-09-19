class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++)
        {
            if(map.find(target-nums[i])!=map.end())
                return {i,map[target-nums[i]]};
            else
                map.insert({nums[i], i});
        }
        return {};
    }
};

//Runtime: 12 ms, faster than 90.50% of C++ online submissions for Two Sum.
//Memory Usage: 10.7 MB, less than 55.65% of C++ online submissions for Two Sum.