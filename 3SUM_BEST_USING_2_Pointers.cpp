class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());int sum;
        for(int i = 0;i<n;i++){
           //1st Useful thing
            if(i>0){if(nums[i]==nums[i-1]){continue;}}
            
            int j = i+1;
            int k = n-1;
            while(k>j){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){k--;}
                if(sum<0){j++;}
                if(sum==0){
                    vector<int> temp ={nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                k--;j++;
//2nd Useful thing
                while(nums[j]==nums[j-1]&&j<k){j++;}
//3rd Useful thing

                while(nums[k]==nums[k+1]&&j<k){k--;}
                }
            }
        }

    return ans;
    }
};
