class Solution {
public:
    int climbStairs(int n) {
        if(1 == n)
            return 1;
        if(2 == n)
            return 2;
        
        int fib_n_2 = 1,  fib_n_1 = 2, fib_n;
        
        for(int i = 3; i <= n; i++)
        {
            fib_n = fib_n_1 + fib_n_2;
            fib_n_2 = fib_n_1;
            fib_n_1 = fib_n;
        } 
        
        return fib_n;
    }
};