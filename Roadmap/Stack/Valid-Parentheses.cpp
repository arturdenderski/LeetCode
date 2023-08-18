class Solution {
public:
    bool isValid(string s) {
        vector<char> open_brackets = {' '};
        unordered_map<char, char> brackets = 
        {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        if(s.length()%2 == 1 || s.length() == 0)
            return false;

        for(char bracket : s)
        {
            if(bracket == '{' || bracket == '(' || bracket == '[')
            {
                open_brackets.push_back(bracket);
            }
            else
            {
                if(brackets[bracket] != open_brackets.back())
                {
                    return false;
                }
                else
                {
                    open_brackets.pop_back();
                }
            }
        }

        if(open_brackets.size() != 1)
            return false;
        return true;
    }
};