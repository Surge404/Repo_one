class Solution {
    int fun_cherry(int a, int b, int d,vector<vector<int>>&grid,int m, int n,vector<vector<vector<int>>> &dp){
        if(b>=n||b<0||d>=n||d<0){
            return -1e9;
        }
        if(a==m-1){
            if(b==d){return grid[m-1][b];}
            else{return grid[m-1][b]+grid[m-1][d];}
            
        }
        if(dp[a][b][d]!=-1){
            return dp[a][b][d];
        }
        int maxi=-1e9;
        for(int i=-1;i<=1;i++){
            for(int j = -1;j<=1;j++){
                int value=0;
                if(b==d){
                value=grid[a][d];
                }
                else{value=grid[a][b]+grid[a][d];}
                value+=fun_cherry(a+1,b+i,d+j,grid,m,n,dp);
                maxi = max(maxi,value);

            }
               
        }
        return dp[a][b][d]= maxi;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size();
       vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(n,-1)));
      return fun_cherry(0,0,n-1,grid,m,n,dp);
      
    }
};
