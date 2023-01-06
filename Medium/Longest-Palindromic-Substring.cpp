class Solution {
public:
    string longestPalindrome(string s)
    {
        int r, l, resLen = 0;
        string res;

        for(int i = 0; i < s.length(); i++)
        {
            l = i, r = i;
            while(l >= 0 && r < s.length() && s[l] == s[r])
            {
                if(resLen < r - l + 1)
                {
                    resLen = r - l + 1;
                    res = s.substr(l, resLen);
                }
                r++;
                l--;
            }

            l = i, r = i + 1;
            while(l >= 0 && r < s.length() && s[l] == s[r])
            {
                if(resLen < r - l + 1)
                {
                    resLen = r - l + 1;
                    res = s.substr(l, resLen);
                }
                r++;
                l--;
            }
        }

        return res;
    }
};