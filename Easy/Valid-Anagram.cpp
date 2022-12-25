class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        unordered_map<char, int> lettersBalance;

        for(int i = 0; i < s.length(); i++)
        {
            lettersBalance[s[i]]++;
            lettersBalance[t[i]]--;
        }

        for(auto i : lettersBalance)
        {
            if(i.second != 0)
                return false;
        }
        
        return true;
    }
};