class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int comp_len;
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++)
        {
            comp_len = prefix.length() <= strs[i].length() ? prefix.length() : strs[i].length();

            if(comp_len == 0)
                return "";

            for(int j = 0; j < comp_len; j++)
            {
                if(strs[i][j] != prefix[j])
                {
                    prefix = strs[i].substr(0,j);
                    break;
                }
                else if(j == comp_len - 1)
                {
                    prefix = strs[i].substr(0,j+1);
                }
            }
        }
        return prefix;
    }
};