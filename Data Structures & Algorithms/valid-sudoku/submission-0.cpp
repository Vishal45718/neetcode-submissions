class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {};
        bool col[9][10] = {};
        bool box[9][10] = {};

        for(int r=0; r < 9; r++)
        {
            for(int c= 0; c <9; c++)
            {
                if(board[r][c] == '.') continue;

                int num = board[r][c] - '0';
                int b = (r/3) * 3 + (c/3);

                if (row[r][num] || col[c][num] || box[b][num]) {
                    return false;
                }

                row[r][num] = true;
                col[c][num] = true;
                box[b][num] = true;
            }
        }

        return true;
    }
};
