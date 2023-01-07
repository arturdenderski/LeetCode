class Solution {
public:
    int reverse(int x) {
        if(INT_MIN == x)
            return 0;

        int res = 0;
        char sign = x < 0 ? -1 : 1;
        x *= sign;
        char power = to_string(x).length() - 1;

        while(x > 0)
        {
            if(res + (x % 10) * pow(10, power) > INT_MAX)
                return 0;
            res += (x % 10) * pow(10, power);
            power--;
            x /= 10;
        }

        return sign == -1 ? -res : res;
    }
};