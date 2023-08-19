class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

    void backtrack(vector<string>& result, string currentString, int open, int close, int n)
    {
        if(currentString.length() == n * 2)
        {
            result.push_back(currentString);
            return;
        }

        if(open < n)
            backtrack(result, currentString + "(", open + 1, close, n);
        if(close < open) 
            backtrack(result, currentString + ")", open, close + 1, n);
    }
};