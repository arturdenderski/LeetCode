class Solution {
public:
    static bool comp(pair<int, int> l, pair<int, int> r)
    {
        return l.second > r.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int i = 0; i < nums.size(); ++i) {
            ++counts[nums[i]];
        }

        vector<pair<int, int>> vec;
        for(auto count : counts)
        {
            vec.push_back(make_pair(count.first, count.second));
        }
        sort(vec.begin(), vec.end(), comp);
        vec.resize(k);

        vector<int> res;
        for(auto pair : vec)
        {
            res.push_back(pair.first);
        }

        return res;
    }
};