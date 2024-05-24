class Solution {
    bool safe_hai_kya(vector<string> &board, int row, int col, int n){
        cout<<"Is safe called\n";
        //horizontal attacks from some queen in left
        for(int i = 0;i<=col;i++){
            if(board[row][i]=='Q'){cout<<"left\n";return false;}
        }
        //atacks from diagonally upwards queens from left side
        int i = row, j = col;
        while(i>=0&&j>=0){
        if(board[i][j]=='Q'){cout<<"diagonal, up\n";return false;}    
        i--;j--;

        }



        //atacks from diagonally downwards queens from left side
        i = row, j = col;
        while(i<n&&j>=0){
        if(board[i][j]=='Q'){cout<<"diagonal down\n";return false;}    
        i++;j--;

        }
        return true;
    }




    void solve_karo(int col, vector<string> &board, vector<vector<string>> & answer, int n){
        if(col==n){cout<<board[0]<<endl<<board[1]<<endl<<board[2]<<endl<<board[3]<<endl;
            answer.push_back(board);

        }
        cout<<"Hello";
        for(int i=0;i<n;i++){
            if(safe_hai_kya(board,i,col,n)){
                board[i][col]='Q';
                cout<<"Yo col is "<<col<<endl;
                solve_karo(col+1,board,answer,n);
                board[i][col]='.';    

            }
            

        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board(n,string(n,'.'));
        solve_karo(0,board,answer, n);
        
        return answer;

    }
};
