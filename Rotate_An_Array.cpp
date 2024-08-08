class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);
        if(k>n){k=k%n;}
        int j = k;
        for(int i = 0; i<n; i++){
            if(j>=n){j=0;}
            ans[j]=nums[i];
            if(j<n){j++;}
            
        } 
        nums = ans;
    }
};
