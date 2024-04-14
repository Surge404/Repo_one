class Solution {
    int walk(int i,int j,int m,int n,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        if(i==m-1){return triangle[i][j];}
        int d=INT_MAX, dr= INT_MAX;
        if(dp[i][j]!=-1){return dp[i][j];}
        d = triangle[i][j]+walk(i+1,j,m,n,triangle,dp);
        dr = triangle[i][j]+walk(i+1,j+1,m,n,triangle,dp);
               
return dp[i][j]= min(d,dr);

    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return walk(0,0,m,n,triangle,dp);
    }
};
