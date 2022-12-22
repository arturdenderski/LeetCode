class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> occursMap;
        int maxOccurs;

        for(int num : nums)
        {
            occursMap[num]++;
            if(occursMap[num] > occursMap[maxOccurs])
                maxOccurs = num;
        }

        return maxOccurs;
    }
};