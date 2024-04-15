class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<int>curr(n);
        vector<int>prev(n);
        for(int j = 0;j<m;j++){prev[j]=triangle[m-1][j];}
curr=prev;
        for(int i =m-2;i>=0;i--){
            for(int j =i;j>=0;j--){
               
                
                    int lm,rm;
                    lm=triangle[i][j]+prev[j];
                    
                    rm=triangle[i][j]+prev[j+1];
                    curr[j]=min(lm,rm);
                
            }
            prev=curr;
        }

        return curr[0];
    }
};
