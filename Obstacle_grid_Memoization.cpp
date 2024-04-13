class Solution {
    int path(int i, int j, vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp){
       
        if(i<0||j<0||obstacleGrid[i][j]!=0){
            return 0;
        }
        if(obstacleGrid[i][j]==0&&i==0&&j==0){
            return 1;
        }
       if(dp[i][j]!=-1){return dp[i][j];}
        int ls =0, rs =0;
        if(i>0){
            
                ls = path(i-1,j,obstacleGrid,dp);
        }
        if(j>0){
                 rs = path(i,j-1,obstacleGrid,dp);
        }
        return dp[i][j]=         ls+rs;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return path(m-1, n-1,obstacleGrid,dp)   ;     
    }
};






