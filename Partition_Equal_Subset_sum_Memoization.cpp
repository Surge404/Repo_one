class Solution {
    bool solve(vector<int> & nums, int s, int n, vector<vector<int>> &dp){
        if(n==0&&nums[0]==s){
            return true;
        }
        else if(s==0){return true;}
        else if(n==0&&s!=0){return false;}
        if(dp[n][s]!=-1){return dp[n][s];}
        int not_take = solve(nums, s, n-1, dp);
        int take = false;
        if(s>=nums[n]){take = solve(nums, s-nums[n], n-1,dp);}
        return dp[n][s] = take|not_take;

    }
public:
    bool canPartition(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            s = s+nums[i];
        }
        if(s%2!=0){
            return false;
        }
        vector<vector<int>> dp(n, vector<int> (s/2+1,-1));
        {return solve(nums, s/2, n-1,dp);}
    }
};
