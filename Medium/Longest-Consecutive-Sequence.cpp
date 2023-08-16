class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        int res = 0;
        int count;

        for(int num : nums)
            s.insert(num);

        for(int num : s)
        {
            if(s.find(num - 1) == s.end())
            {
                count = 1;
                while(s.find(num + 1) != s.end())
                {
                    count++;
                    num++;
                }

                res = max(count, res);
            }
        }

        return res;
    }
};