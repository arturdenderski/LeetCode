class Solution {
public:
    int firstUniqChar(string s) {
        int letters[27] = { 0 };
        
        for (int i = 0; i < s.length(); i++) {
            letters[s[i]-97]++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (1 == letters[s[i]-97]) {
                return i;
            }
        }
        
        return -1;
    }
};