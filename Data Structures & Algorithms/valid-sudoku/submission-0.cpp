class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++i) {
            unordered_set<char>row, col, box;
            for(int j = 0; j < 9; ++j) {
                // Check row
                if(board[i][j] != '.') {
                    if(row.count(board[i][j])) return false;
                    row.insert(board[i][j]);
                }
                // Check col
                if(board[j][i] != '.') {
                    if(col.count(board[j][i])) return false;
                    col.insert(board[j][i]);
                }
                // Check 3x3 box
                int rowIndex = 3 * (i/3);
                int colIndex = 3 * (i%3);
                char val = board[rowIndex + j / 3][colIndex + j % 3];
                if(val != '.'){
                    if(box.count(val)) return false;
                    box.insert(val);
                }
            }
        }
        return true;
    }
};
