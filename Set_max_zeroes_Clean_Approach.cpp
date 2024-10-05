class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> points;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m;j++){
                if(matrix[i][j]==0){
                    vector<int>one = {i, j};
                    points.push_back(one);
                }
            }
        }
        for(int i = 0; i<points.size(); i++){
            vector<int> temp = points[i];
            
                for(int j=0; j<m; j++){
                    matrix[temp[0]][j]=0;
                }
                for(int j=0; j<n; j++){
                    matrix[j][temp[1]]=0;
                }
        }
    }
};
