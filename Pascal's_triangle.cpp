class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prev(1,1);
        for(int i = 1;i<=numRows; i++){
            vector<int> curr(i);
            for(int j = 1;j<=i;j++){
                if(j==1||j==i){curr[j-1]=1;}
                else{
                    curr[j-1]=prev[j-1]+prev[j-2];
                }
            }
            ans.push_back(curr);
            prev = curr;
        }
        return ans;
    }
};
