class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pos = digits.size()-1;
        bool f = 0;
        
        while(digits[pos] == 9)
        {
            if(pos != 0)
            {
                digits[pos--] = 0;
            }
            else
            {
                digits[pos] = 0;
                f = 1; 
            } 
        }
        
        if(f != 1)
            digits[pos]++;
        else
            digits.insert(digits.begin(), 1);

        return digits;
    }
};