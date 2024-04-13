class Solution {
 
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0&&obstacleGrid[0][0]==0){dp[i][j]=1;}
                else{ int ls =0, rs =0;
        
          if(obstacleGrid[i][j]==0){        if(i>0){
            
              ls = dp[i-1][j];
        }
        if(j>0){
                 rs = dp[i][j-1];
        }
        }
dp[i][j]= ls+rs;



                }
            }
        }
        return dp[m-1][n-1]   ;     
    }
};






