class Solution {
    int max_non_adj_ele_sum(int n, vector<int> & nums, vector<int>& dp){
        
        // if(n<0){return 0;}
        // if(dp[n]!=-1){return dp[n];}
        // int take = nums[n]+max_non_adj_ele_sum(n-2, nums,dp);
        // int not_take = max_non_adj_ele_sum(n-1, nums, dp);
        // return dp[n]=max(take, not_take);

        for(int i = 0;i<nums.size();i++){
            if(i==0){
                dp[i]=max(nums[0],0);
            }
            else if(i==1){
                dp[i]=max(dp[0], nums[1]);
            }
            else{
                int not_take = dp[i-1];
                int take = 0;
                if(i>1){
                    take = nums[i]+dp[i-2];
                }
                dp[i]=max(take, not_take);
            }
        }
        return dp[nums.size()-1];
    }
public:
    int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
        long long int sum = 0;
        for(int i = 0;i<m;i++){
            vector<int> dp(n,-1);
            nums[queries[i][0]]=queries[i][1];
            int ans = max_non_adj_ele_sum(n-1, nums, dp);
            if(ans<0){ans=0;}
            sum+=ans;cout<<ans<<endl;
        }
        
        int final_ans=sum%1000000007;
        return final_ans;
    }
};
