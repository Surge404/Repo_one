class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mc=0, c=0;
        int n = nums.size();int j = 1;
        for(int i = 0; i<n;i++){
            if(nums[i]==1){c++;mc = max(mc, c);}
            else{mc = max(mc, c);c=0;}
            cout<<i<<" "<<" "<<c<<" "<<mc<<" "<<endl;
        }
        return mc;
    }
};
