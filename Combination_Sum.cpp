class Solution {
    private:
    void combisum(int i,int n,vector<int> & candidates,int &target,vector<vector<int>> &ans,vector<int> &temp, int ts){
        if(i==n){if(target==ts){ans.push_back(temp);return;}}
        if(ts>target||i==n){return;}
        temp.push_back(candidates[i]);
        
        combisum(i, n, candidates, target, ans, temp, ts+candidates[i]);
        
        temp.pop_back();
        
        combisum(i+1, n, candidates, target, ans, temp, ts);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        int i =0, ts=0;
        vector<int> temp;
        combisum(i, n, candidates, target, ans, temp, ts);
        return ans;
    }
};
