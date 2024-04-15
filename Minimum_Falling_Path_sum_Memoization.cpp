class Solution {
    int pathsum(int i, int j, int m, int n,vector<vector<int>>& matrix ,vector<vector<int>>&dp){
        if(j<0||j>n-1){return 1e9;}
        if(i==0){
            return matrix[i][j];

        }
        
if(dp[i][j]!=-1){return dp[i][j];}
        int left = matrix[i][j]+pathsum(i-1,j-1,m,n,matrix,dp);
        int up = matrix[i][j]+pathsum(i-1,j,m,n,matrix,dp);
        int right = matrix[i][j]+pathsum(i-1,j+1,m,n,matrix,dp);
        return dp[i][j]=min(left,min(right,up));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int maxi = 1e9;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int j=0;j<n;j++){maxi=min(maxi,pathsum(n-1,j,m,n,matrix,dp));}
        return maxi;
        
    }
};
