class Solution {
public:
    int money(vector<int> nums,int i,vector<int> &dp){
        int n = nums.size();
        if(i==0){return nums[0];}
        int pick_money = nums[i];
        if(dp[i]!=-1){return dp[i];}
        if(i>1){
        pick_money=nums[i]+money(nums,i-2,dp);
        }

        int not_pick=money(nums,i-1,dp);
        return dp[i]=max(pick_money, not_pick);
            }

    int rob(vector<int>& nums) {    
        int i = nums.size()-1;
        vector<int> dp(i+1,-1);
        return money(nums,i,dp);
    }
};
