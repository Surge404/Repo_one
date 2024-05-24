class Solution {
bool safety_check_kar(int row, int col, vector<string> square, int n){
    // left
    for(int i = 0;i<col;i++){
        if(square[row][i]=='Q'){
            return false;
        }
    }
    //up diagonal left
    int i = row, j = col;
    while(i>=0&&j>=0){
        if(square[i][j]=='Q'){
            return false;
        }
        i--;j--;
    }

    i = row, j = col;
    while(i<n&&j>=0){
        if(square[i][j]=='Q'){
            return false;
        }
        i++;j--;
    
    }
    return true;
}

    void solve_kar_de_bhaai_mere(int col, vector<vector<string>> & ans, vector<string> square, int n){
        if(col>=n){ans.push_back(square);
        return;}
        for(int i = 0;i<n;i++){
            if(safety_check_kar(i, col, square, n))
            {square[i][col]='Q';
            solve_kar_de_bhaai_mere(col+1, ans, square,n);
            square[i][col]='.';

            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;
        vector<string> square(n, string(n, '.'));
        solve_kar_de_bhaai_mere(0,ans,square,n);
        return ans;
    }
};
