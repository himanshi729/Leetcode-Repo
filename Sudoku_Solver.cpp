class Solution {
public:
    bool solve(vector<vector<char>>& board, int row, int col){
        //base case
        if (row == 9) {
            return true;
        }
        int nextRow = row;
        int nextCol = col+1;
        if(col+1 == 9){
            nextRow = row+1;
            nextCol = 0;
        } 

        if(board[row][col] != '.'){
            return solve(board, nextRow, nextCol);
        }

        for(int digit='1'; digit<='9'; digit++){
            if (isSafe(board, row, col, digit)) {
                board[row][col] = digit; // Try placing the char digit
                
                if (solve(board, nextRow, nextCol)) {
                    return true; 
                }
                
                board[row][col] = '.'; // Backtrack: reset to empty char
            }
        }

        return false;
    }

    bool isSafe(vector<vector<char>>& board, int row, int col, int digit){
        //vertical
        for(int i=0; i<=8; i++){
            if(board[i][col] == digit)
            return false;
        }
        //horizontal
        for(int j=0; j<=8; j++){
            if(board[row][j] == digit)
            return false;
        }
        //3x3 board
        int startRow = (row/3)*3;
        int startCol = (col/3)*3;
        for(int i=startRow; i<=startRow+2; i++){
            for(int j=startCol; j<=startCol+2; j++){
                if(board[i][j] == digit){
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
        
    }
};
