class Solution {
 
public:
    int cherryPickup(vector<vector<int>>& grid) {
      int m = grid.size();
      int n = grid[0].size();
       vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(n,-1)));
       //for base cases
       for(int j = 0;j<n;j++){
        for(int k =0;k<n;k++){
            if(j==k){dp[m-1][j][k]=grid[m-1][j];}
            else{dp[m-1][j][k]=grid[m-1][j]+grid[m-1][k];}
        }
       }
       //
       //Tabulation kaa xerox
       for(int a = m-2;a>=0;a--){
        for(int b=0;b<n;b++){
            for(int d = 0;d<n;d++){
        int maxi=-1e9;
        for(int i=-1;i<=1;i++){
            for(int j = -1;j<=1;j++){
                int value=-1e9;
                if(b==d){
                value=grid[a][d];
                }
                else{value=grid[a][b]+grid[a][d];}
                if((b+i>=0)&&(b+i<n)&&(d+j>=0)&&(d+j<n)){value+=dp[a+1][b+i][d+j];}
                maxi = max(maxi,value);

            }
               
        }
         dp[a][b][d]= maxi;
            }
        }
       }
       //


      return dp[0][0][n-1];
      
    }
};











