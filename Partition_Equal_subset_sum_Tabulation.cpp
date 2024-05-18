class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            s = s+nums[i];
        }
        if(n<=1){return false;}
        if(n==2){return nums[0]==nums[1];}
        if(s%2!=0){
            return false;
        }
        vector<vector<int>> dp(n, vector<int> (s/2+1,0));
        s=s/2;
        for(int i = 0;i<n;i++){
            dp[i][0]=1;
        }
        dp[0][nums[0]]=1;


        for(int i = 1;i<n;i++){
            for(int j = 1;j<=s;j++){
                int not_take = dp[i-1][j];
                int take = 0;
                if(j>nums[i]){take = dp[i-1][j-nums[i]];} 
                dp[i][j]=take|not_take;
            }
        }
        {return dp[n-1][s];}
    }
};
