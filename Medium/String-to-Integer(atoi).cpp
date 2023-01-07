class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        char i = 0;
        char sign = 1;

        while (s[i] == ' ') 
            i++;     

        if (s[i] == '-') 
        {
            sign = -1;
            i++;
        } 
        else if (s[i] == '+') 
        {
            i++;
        }

        while (i < s.size() && isdigit(s[i])) 
        {
            if((res) * sign > INT_MAX / 10
                || (res)* sign == INT_MAX / 10 && (s[i] - 48) >= 7)
                return INT_MAX;
            else if((res) * sign < INT_MIN / 10
                || (res) * sign == INT_MIN / 10 && (s[i] - 48) >= 8)
                return INT_MIN;
            res = (res * 10) + (s[i] - 48);
            i++;
        }
        return res * sign;
    }
};