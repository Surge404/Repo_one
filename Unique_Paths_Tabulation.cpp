class Solution {

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int lw=0,rw=0;
                if(i>0){lw=dp[i-1][j];}
                if(j>0){rw=dp[i][j-1];}
                if(i>0||j>0){
                 dp[i][j]=lw+rw;
                }
           
            }
        }

        return dp[m-1][n-1];

    }
};
