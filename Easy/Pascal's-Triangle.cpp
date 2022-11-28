class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows = {{1}};
        
        for(int i = 0; i < numRows-1; i++)
        {
            vector<int> row = {1};
            
            for(int j = 0; j < i; j++)
            {
                row.push_back(rows[i][j]+rows[i][j+1]);
            }
            
            row.push_back(1);
            rows.push_back(row);
        }
        
        return rows;
    }
};