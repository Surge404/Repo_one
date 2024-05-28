class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, maxsum = INT_MIN;
        int flag1 = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]<0){flag1=1;}
            sum=sum+nums[i];

        }
        if(flag1==0){return sum;}
        for(int i = 0;i<n;i++){sum = 0;
            for(int j = i;j<n;j++){
                if(sum<0){break;}
                sum=sum+nums[j];maxsum=max(maxsum, sum);
            }
            
        }
        
        return maxsum;
    }
};
