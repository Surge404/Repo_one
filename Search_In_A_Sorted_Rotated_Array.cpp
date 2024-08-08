class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> rotated = nums;
        
        int n = nums.size();
        int s = 0, e = n-1;
        int mid;
        while(s<e){
            mid = (s+e)/2;
            if(nums[mid]>nums[e]){s=mid+1;}
            else {e=mid;}
        }
        int piv = s;
        if(piv==0){s=0, e=n-1;}else{

        s=0, e=n-1;
        if(target>=nums[s]&&target<=nums[piv-1]){e=piv;}
        else if(target>=nums[piv]&&target<=nums[e]){s=piv;}
        }
        while(s<=e){
            mid=(s+e)/2;
            if(target==nums[mid]){return mid;}
           
           if(target>nums[mid]){s=mid+1;}
           else{
            e=mid-1;
           }

        }
        return -1;
    }
};
