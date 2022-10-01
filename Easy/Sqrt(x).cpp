class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
        {
            return x;
        }

        long start = 1, end = x / 2, mid, res, sqr;
        
        while(start<=end)
        {
            mid = (start+end) / 2;
            sqr = mid*mid;

            if(sqr == x)
                return mid;

            if(sqr < x)
            {
                start = mid + 1;
                res = mid;
            }
            else
            {
                end = mid - 1;
            }
        }

        return res;
    }
};