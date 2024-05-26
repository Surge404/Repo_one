class Solution {
    bool check_validity(vector<vector<char>> &board, char c, int row, int col){
        for(int i = 0;i<9;i++){
            if(board[row][i]==c){return false;}
            if(board[i][col]==c){return false;}
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){return false;}
            
        }
        return true;
    }

    bool solveit(vector<vector<char>>&board){
        int n = 9;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]=='.'){
                    for(char k = '1';k<='9';k++){
                        if(check_validity(board, k, i,j)){
                            board[i][j]=k;
                            if(solveit(board)){
                                return true;
                            }
                            else{board[i][j]='.';}

                        }
                    }return false;
                }

            }
        }
return true;

    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solveit(board);
        
    }
};
