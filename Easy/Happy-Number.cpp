class Solution {
public:
    bool isHappy(int n) {
        int number = n;
        int sum = n;
        
        if (n == 1 || n == 7)
            return true;

        while(sum > 9)
        {
            sum = 0;
            while(number > 0)
            {
                sum += (number % 10) * (number % 10);
                number /= 10;
            }
            if (sum == 1)
                return true;
            number = sum;
        }

        return sum == 7 ? true : false;
    }
};