class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for(int j = i+1;j<n;j++){
                if(j>i+1&&nums[j]==nums[j-1]){
                    continue;
                }
                long long sum;
                int k = j+1, l = n-1;
                while(k<l){
                sum=nums[i]+nums[j];
                sum+=nums[k]+nums[l];
                if(sum<target){k++;}
                else if(sum>target){l--;}
                else{vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
                k++;l--;
                while(nums[k]==nums[k-1]&&k<l){k++;}
                while(nums[l]==nums[l+1]&&k<l){l--;}
                }    
                }
            }
        }
        return ans;
    }
};
