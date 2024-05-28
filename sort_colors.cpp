class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            switch(nums[i]){
                case 0: zero++;break;
                case 1: one++; break;
                case 2: two++; break;
            }
        }int a = 0;
        while(zero>0){nums[a]=0;a++;zero--;}
        while(one>0){nums[a]=1;a++;one--;}
        while(two>0){nums[a]=2;a++;two--;}
        
    }
};
