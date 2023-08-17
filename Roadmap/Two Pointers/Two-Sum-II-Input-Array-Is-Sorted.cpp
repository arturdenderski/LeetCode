class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x = 0;
        int y = numbers.size() - 1;
        vector<int> res;

        while(x < y)
        {
            if(numbers[x] + numbers[y] == target)
            {
                res = {x + 1,y + 1};
                return res;
            }
            else if(numbers[x] + numbers[y] < target)
            {
                x++;
            }
            else if(numbers[x] + numbers[y] > target)
            {
                y--;
            }
        }
        return res;
    }
};