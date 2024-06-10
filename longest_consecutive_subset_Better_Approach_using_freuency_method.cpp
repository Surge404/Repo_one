class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int large = nums[n-1];
        int small = nums[0];
        vector<int> count(large-small+1, 0);
        long coun = 0,max_count=0;
        for(int i = 0;i<n;i++){
            count[nums[i]-small]++;
        }
        for(int i = 0;i<large-small+1;i++){
            if(count[i]==0){
                coun=0;
            }
            else{
            coun++;
            }
            max_count=max(coun, max_count);
        }
        return max_count;
    }
};
