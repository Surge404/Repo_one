class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> curr(n,0);
        vector<int> prev(n,0);
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0&&j==0){curr[j]=grid[i][j];}
                else{
                    int t1 = INT_MAX, t2 = INT_MAX;
                    if(i>0){
                t1 = prev[j]+grid[i][j];}
                if(j>0){t2 = curr[j-1]+grid[i][j];}
                curr[j]=min(t1,t2);
                }
            }
        prev = curr;
        }
        return curr[n-1];
    }
};
