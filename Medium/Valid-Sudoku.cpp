class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> used;

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(used.contains(board[i][j]) && board[i][j] != '.')
                    return false;
                used.insert(board[i][j]);
            }
            used.clear();
        }

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(used.contains(board[j][i]) && board[j][i] != '.')
                    return false;
                used.insert(board[j][i]);
            }
            used.clear();
        }

        for(int x = 0; x < 9; x += 3)
        {
           for(int y = 0; y < 9; y += 3)
            {
                for(int i = x; i < x + 3; i++)
                {
                    for(int j = y; j < y + 3; j++)
                    {
                        if(used.contains(board[j][i]) && board[j][i] != '.')
                            return false;
                        used.insert(board[j][i]);
                    }  
                }
                used.clear();
            } 
        }
        
        return true;
    }
};