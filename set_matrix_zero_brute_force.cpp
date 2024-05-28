class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans = matrix;
        vector<vector<int>> flag (n, vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int a = 0;a<n;a++){
                        ans[a][j]=0;flag[a][j]=1;
                    }
                    for(int a = 0;a<m;a++){
                        ans[i][a]=0;flag[i][a]=1;
                    }
                }
                else{
                    if(flag[i][j]!=1){ans[i][j]=matrix[i][j];}}
            }
        }
        matrix=ans;
    }
};
