class Solution {
    bool check_validity(char c, vector<vector<char>>&board,int n,int row, int col){
        for(int i = 0;i<n;i++){
            
                if(board[i][col]==c){cout<<"i is "<<i;return false;}
                if(board[row][i]==c){cout<<"j is "<<i;return false;}
                if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){cout<<"Teesra"<<i<<" "<<i;return false;}
            
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();cout<<n;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]!='.'){
                    char p = board[i][j];
                    board[i][j]='.';
                    if(!check_validity(p,board,n,i,j)){return false;}
                    board[i][j]=p;

                }
            }
        }
    return true;
    }
};



