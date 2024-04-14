class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n,-1));

        dp[0][0]=grid[0][0];
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0&&j==0){dp[i][j]=grid[i][j];}
                else{        int left = INT_MAX, right = INT_MAX;
        if(i>0){left= grid[i][j]+path(i-1,j,grid,dp);}
        if(j>0){right= grid[i][j]+path(i,j-1,grid,dp);}
    dp[i][j]=min(left, right);}
            }
        }
        return dp[m-1][n-1];
    }
};
