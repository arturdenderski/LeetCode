class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1;

        while(m > 0){
            if(target < matrix[m][0]) 
                --m;
            else
                break;
        }

        int l = 0;
        int r = matrix[m].size() - 1;
        
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(matrix[m][mid] == target)
            {
                return true;
            }
            else if(matrix[m][mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return false;
    }
};