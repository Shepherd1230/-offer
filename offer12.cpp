
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.size()==0) {
            return false;
        }

        for (int curRow=0; curRow<board.size(); curRow++) {
            for (int curCol=0; curCol<board[curRow].size(); curCol++) {
                if (dfs(board, word, curRow, curCol, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>> &board, string word, int curRow, int curCol, int idx)
    {
        if (idx==word.size()) return true;
        if (curRow<0 || curRow>=board.size() || curCol<0 || curCol>=board[0].size() || word[idx] != board[curRow][curCol]) {
            return false;
        }
        
        idx++;
        char temp=board[curRow][curCol];
        board[curRow][curCol]='/';
        
        bool ans=dfs(board, word, curRow-1, curCol, idx) ||
        dfs(board, word, curRow+1, curCol, idx) ||
        dfs(board, word, curRow, curCol-1, idx) ||
        dfs(board, word, curRow, curCol+1, idx);
        board[curRow][curCol]=temp;
        return ans;
    }
};
