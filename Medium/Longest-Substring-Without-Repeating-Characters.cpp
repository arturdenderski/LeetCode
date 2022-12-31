class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sLen = s.length();
        int res = 0;
        int i = 0;
        unordered_map<char, int> indexes;

        for(int j = 0; j < sLen; j++)
        {
            if(indexes.find(s[j]) != indexes.end())
                i = indexes[s[j]] > i ? indexes[s[j]] : i;
            
            res = res > j - i + 1 ? res : j - i + 1;
            indexes[s[j]] = j + 1;
        }

        return res;
    }
};