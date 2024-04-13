class Solution {
    int walk(int i,int j,vector<vector<int>>& dp){
        if(i==0&&j==0){
            return 1;
        }
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int lw =0, rw = 0;
        if(i>0){
            lw = walk(i-1,j,dp);
        }
        if(j>0){
            rw =  walk(i,j-1,dp);
        }
        return dp[i][j]= lw+rw;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return walk(m-1,n-1,dp);
    }
};
