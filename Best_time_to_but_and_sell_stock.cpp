class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> nums = prices;
        int maxi = INT_MIN, mini = INT_MAX;
        int profit = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]<mini){
                mini = nums[i];
            }profit=max(profit, nums[i]-mini);
        }
        return profit;
    }
};
