class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int weight = columnTitle.length() - 1;

        for(char letter : columnTitle)
        {
            result += (letter - 64) * pow(26, weight);
            weight--;
        }
        
        return result;
    }
};