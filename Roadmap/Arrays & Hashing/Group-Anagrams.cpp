class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;

        for(int i = 0; i < strs.size(); i++)
        {
            string x = strs[i];
            sort(x.begin(),x.end());
            m[x].push_back(strs[i]);
        }

        for(auto i:m)
        {
            res.push_back(i.second);
        }

        return res;
    }
};