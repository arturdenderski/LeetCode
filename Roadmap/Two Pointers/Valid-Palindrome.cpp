class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        
        for(char c : s)
        {
            if(65 <= c && c <= 90)
            {
                c += 32;
                clean += c;
            }
            else if((97 <= c && c <= 122) || (48 <= c && c <= 57))
            {
                clean += c;
            }
        }
        
        for(int i = 0; i < clean.length(); i++)
        {
            if(clean[i] != clean[clean.length()-1-i])
                return false;
        }
        
        return  true;
    }
};