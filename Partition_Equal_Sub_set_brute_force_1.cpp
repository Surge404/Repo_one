class Solution {
    bool tellans(vector<int> & nums, int sum1, int sum2,int n,int flag){
        if(n==-1&&sum1!=sum2){cout<<"base caseeeeeeeeeeee iteration in n is "<<n<<" sum1 - "<<sum1<<" sum2 is - "<<sum2<<endl;return 0;}
        if(n==-1&&sum1==sum2){return true; cout<<"base caseeeeeeeeeeee iteration in n is "<<n<<" sum1 - "<<sum1<<" sum2 is - "<<sum2<<endl;}
        cout<<"Normal iteration in n is "<<n<<" sum1 - "<<sum1<<" sum2 is - "<<sum2<<endl;
        int onetake = tellans(nums, sum1+nums[n], sum2,n-1,1);
        int twotake = tellans(nums, sum1, sum2+nums[n],n-1,1);
        return onetake|twotake;


    }
public:
    bool canPartition(vector<int>& nums) {
        int sum1= 0;
        int sum2=0;
        int n = nums.size();
        vector<vector<int>> dp(n,vector<>)
        return tellans(nums,sum1,sum2,n-1, 0);
    }
};
