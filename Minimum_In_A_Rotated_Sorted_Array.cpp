class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int> rotated = nums;
        int n = nums.size();
        int s = 0, e = n-1;
        int mid;
          while(s<e){
            mid = (s+e)/2;
            if(nums[mid]>nums[e]){s=mid+1;}
            else {e=mid;}
        }

        return nums[s];        
    }
};
