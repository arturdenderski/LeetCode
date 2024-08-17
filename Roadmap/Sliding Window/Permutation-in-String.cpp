class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        size_t len1 = s1.length();
        size_t len2 = s2.length();
        if (len2 < len1)
            return false;

        std::unordered_map<int, int> s1f;
        std::unordered_map<int, int> subf;

        for (auto c : s1) {
            s1f[c]++;
        }

        for (size_t i = 0; i < len1; i++) {
            subf[s2[i]]++;
        }

        for (size_t i = len1; i < len2; ++i) {
            if (subf == s1f) {
                return true;
            }

            subf[s2[i - len1]]--;
            if (subf[s2[i - len1]] == 0) {
                subf.erase(s2[i - len1]);
            }
            subf[s2[i]]++;
        }

        if (subf == s1f) {
            return true;
        }

        return false;
    }
};
