class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int num : nums1)
        {
            for(int i = 0; i < nums2.size(); i++)
            {
                if(num == nums2[i])
                {
                    result.push_back(num);
                    nums2.erase(nums2.begin() + i);
                    break;
                }
            }
        }
        return result;
    }
};