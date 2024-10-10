class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        int s = 0, e = n-1;
        while(s<=e){
                m=(s+e)/2;
                int a = INT_MAX;
                int b = INT_MAX;
                if(m>0){a=nums[m-1];}
                if(m<n-1){b=nums[m+1];} 
                if(a!=nums[m]&&b!=nums[m]){cout<<m;return nums[m];}
                else{
                    if((a==nums[m]&&m%2==1)||(nums[m]==b&&m%2==0)){s=m+1;}
                    else{e=m;}
                }
        }
        return -1;
    }
};

