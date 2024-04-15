class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int j = 0;j<m;j++){dp[m-1][j]=triangle[m-1][j];}

        for(int i =m-2;i>=0;i--){
            for(int j =i;j>=0;j--){
               
                
                    int lm,rm;
                    lm=triangle[i][j]+dp[i+1][j];
                    
                    rm=triangle[i][j]+dp[i+1][j+1];
                    dp[i][j]=min(lm,rm);
                
            }
        }

        return dp[0][0];
    }
};
